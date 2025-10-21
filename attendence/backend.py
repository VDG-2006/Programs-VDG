from flask import Flask, request, jsonify
from flask_cors import CORS
import sqlite3

app = Flask(__name__)
CORS(app)

def db_connect():
    conn = sqlite3.connect('attendance.db')
    return conn

# Set up database
def init_db():
    conn = db_connect()
    cursor = conn.cursor()
    cursor.execute('CREATE TABLE IF NOT EXISTS students (id INTEGER PRIMARY KEY, name TEXT)')
    cursor.execute('CREATE TABLE IF NOT EXISTS attendance (id INTEGER PRIMARY KEY, student_id INTEGER, date TEXT, status TEXT)')
    cursor.execute('CREATE TABLE IF NOT EXISTS activities (id INTEGER PRIMARY KEY, student_id INTEGER, activity TEXT, date TEXT)')
    conn.commit()
    conn.close()

init_db()

@app.route('/add_student', methods=['POST'])
def add_student():
    name = request.json['name']
    conn = db_connect()
    cursor = conn.cursor()
    cursor.execute('INSERT INTO students (name) VALUES (?)', (name,))
    conn.commit()
    conn.close()
    return jsonify({'status': 'Student added!'})

@app.route('/students', methods=['GET'])
def students():
    conn = db_connect()
    cursor = conn.cursor()
    cursor.execute('SELECT * FROM students')
    students = [{'id': row, 'name': row[21]} for row in cursor.fetchall()]
    conn.close()
    return jsonify(students)

@app.route('/mark_attendance', methods=['POST'])
def mark_attendance():
    student_id = request.json['student_id']
    date = request.json.get('date', None)
    status = request.json.get('status', 'present')
    conn = db_connect()
    cursor = conn.cursor()
    cursor.execute('INSERT INTO attendance (student_id, date, status) VALUES (?, ?, ?)', (student_id, date, status))
    conn.commit()
    conn.close()
    return jsonify({'status': 'Attendance marked!'})

@app.route('/log_activity', methods=['POST'])
def log_activity():
    student_id = request.json['student_id']
    activity = request.json['activity']
    date = request.json.get('date', None)
    conn = db_connect()
    cursor = conn.cursor()
    cursor.execute('INSERT INTO activities (student_id, activity, date) VALUES (?, ?, ?)', (student_id, activity, date))
    conn.commit()
    conn.close()
    return jsonify({'status': 'Activity logged!'})

@app.route('/report/<int:student_id>', methods=['GET'])
def report(student_id):
    conn = db_connect()
    cursor = conn.cursor()
    cursor.execute('SELECT date, status FROM attendance WHERE student_id=?', (student_id,))
    attend = cursor.fetchall()
    cursor.execute('SELECT activity, date FROM activities WHERE student_id=?', (student_id,))
    acts = cursor.fetchall()
    conn.close()
    return jsonify({'attendance': attend, 'activities': acts})

if __name__ == '__main__':
    app.run(debug=True, port=5000)
