package Java.person;

public class Person {
    private String name;
    private int age;
    private char gender;

    public Person(){this.name="None";  this.age=0; this.gender='O';}

    public Person(String name, int age, char gender){
        this.name=name;
        this.age=age;
        this.gender=gender;
    }

    public String getName(){ return this.name;}
    public int getAge(){ return this.age; }
    public char gender(){ return this.gender; }

    public void setName(String name){ this.name=name; }
    public void setAge(int age){ this.age=age; }
    public void setGender(char gender){ this.gender=gender; }

    public void displayDetails(){
        System.out.println("Name:"+ name+"\nAge:"+age+"\nGender:"+gender);
    }
    public boolean isAdult(){ if(age>=18) return true; else return false;}
}
