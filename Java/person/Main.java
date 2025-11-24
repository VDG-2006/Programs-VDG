package Java.person;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Person p=new Person();
        String name;
        int age,ch;
        char gender;
       do{
            System.out.println("MENU:\n1) New Person\n2)Display Person\n3)Check Adult\n4)Exit");
            ch=Integer.parseInt(sc.nextLine());
            switch (ch) {
                case 1:
                    System.out.println("Enter name:");
                    name=sc.nextLine();
                    System.out.println("Enter age:");
                    age=Integer.parseInt(sc.nextLine());
                    System.out.println("Enter gender:");
                    gender=sc.nextLine().charAt(0);
                    p=new Person(name,age,gender);
                    break;
                
                case 2:
                    p.displayDetails();
                    break;
                case 3:
                    if(p.isAdult()) {System.out.println("Adult");}
                    else {System.out.println("Not Adult");}
                    break;
                case 4: System.out.println("Exiting...");
                break;
                default:System.out.println("Invalid choice");
                    break;
            }
        }while(ch!=4);
    }
}
