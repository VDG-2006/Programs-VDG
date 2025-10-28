package Java.Shape;

public class Triangle implements Shape{
    private double side1;
    private double side2;
    private double side3;

    public Triangle(){}
    public Triangle(double side1, double side2, double side3){
        this.side1=side1;
        this.side2=side2;
        this.side3=side3;
    }

    public double getSide1(){ return side1; }
    public double getSide2(){ return side2; }
    public double getSide3(){ return side3; }

    public void setSide1(double side1){ this.side1= side1; }
    public void setSide2(double side2){ this.side2= side2; }
    public void setSide3(double side3){ this.side3= side3; }

    @Override
    public double calculatePerimeter(){ return side1+side2+side3;}

    @Override
    public double calculateArea(){ 
        double sp= this.calculatePerimeter()/2;
        double area=sp*(sp-side1)*(sp-side2)*(sp-side3);
        return Math.sqrt(area);
    }
}
