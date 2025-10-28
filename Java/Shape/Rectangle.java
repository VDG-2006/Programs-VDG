package Java.Shape;

public class Rectangle implements Shape {
    private double length;
    private double breadth;

    public Rectangle() {}
    public Rectangle(double length, double breadth){
        this.length=length;
        this.breadth=breadth;
    }

    public double getLength(){ return this.length; }
    public double getBreadth(){ return this.breadth; }

    public void setLength(double length){ this.length=length; }
    public void setBreadth(double breadth) { this.breadth=breadth; }

    @Override
    public double calculateArea(){ return (double)(length*breadth); }
    @Override
    public double calculatePerimeter() {return 2*(length+breadth); }
}
