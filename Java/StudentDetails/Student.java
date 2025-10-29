package Java.StudentDetails;

public class Student {
    private String name;
    private long number;
    private int age;
    private int marks;

    public Student() {}
    public Student(String name, long number, int age, int marks ){
        this.name=name;
        this.number=number;
        this.age=age;
        this.marks=marks;
    }

    public String getName() { return name; }
    public long getNumber() { return number; }
    public int getAge() { return age; }
    public int getMarks() { return marks; }

    public void setName(String name) { this.name = name; }
    public void setNumber(long number) { this.number = number; }
    public void setAge(int age) { this.age = age; }
    public void setMarks(int marks) { this.marks = marks; }

    public void displayDetails(){
        System.out.println("Name: "+name);
        System.out.println("Number: "+number);
        System.out.println("Age: "+ age);
        System.out.println("Marks: "+ marks);
    }
}
