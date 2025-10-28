package Java.Shape;

public class Tester {
    public static void main(String[] args){
        Circle c1= new Circle(10);
        System.out.printf("Perimeter: %.2f\n",c1.calculatePerimeter());
        System.out.printf("Area: %.2f\n", c1.calculateArea());

        Rectangle r1=new Rectangle(5,3);
        System.out.printf("Perimeter: %.2f\n",r1.calculatePerimeter());
        System.out.printf("Area: %.2f\n", r1.calculateArea());

        Triangle t1=new Triangle(3,4,5);
        System.out.printf("Perimeter: %.2f\n",t1.calculatePerimeter());
        System.out.printf("Area: %.2f\n", t1.calculateArea());
    }
}
