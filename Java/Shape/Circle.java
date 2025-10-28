package Java.Shape;

public class Circle implements Shape {
    private double radius;

    public Circle(){}
    public Circle(double radius){ this.radius=radius; }

    public double getRadius(){ return this.radius; }
    public void setRadius(double radius){ this.radius=radius; }

    @Override
    public double calculateArea(){ return Math.PI*radius*radius; }
    @Override
    public double calculatePerimeter(){ return 2*Math.PI*radius; }
}
