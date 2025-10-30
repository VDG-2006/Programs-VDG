package Java.StudentDetails;

import java.util.Scanner;

public class Tester {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Student[] students= new Student[4];

        for(int i=0;i<4;i++){
            System.out.println("Enter details of Student "+ (i+1)+":");
            System.out.print("Enter name: ");
            String name = sc.nextLine();
            System.out.print("Enter mobile number: ");
            long mobile = Long.parseLong(sc.nextLine());
            System.out.print("Enter age: ");
            int age = Integer.parseInt(sc.nextLine());
            System.out.print("Enter marks: ");
            int marks = Integer.parseInt(sc.nextLine());
            students[i] = new Student(name, mobile, age, marks);
        }

        System.out.println("--------------------------------------");
        System.out.println("Student Details: ");
        for(Student s : students){ 
            s.displayDetails(); 
            System.out.println("----------------"); 
        }
        sc.close();
    }
}
