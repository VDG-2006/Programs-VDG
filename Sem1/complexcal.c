#include<stdio.h>
#include<math.h>
typedef struct 
{
    float real,img;
}complex;
complex input(complex a)
{
    printf("Enter real part:");
    scanf("%f",&a.real);
    printf("Enter imaginary part:");
    scanf("%f",&a.img);
    return a;
}
void print(complex a)
{
    printf("(%.2f)+i(%.2f)\n",a.real,a.img);
}
complex add(complex a,complex b,complex c )
{
   c.real=a.real+b.real; 
   c.img=a.img+b.img;
   return c;
}
complex subtract(complex  a,complex b,complex c )
{
   c.real=a.real-b.real; 
   c.img=a.img-b.img;
   return c;
}
complex multiply(complex  a,complex b,complex c )
{
   c.real=a.real*b.real-a.img*b.img; 
   c.img=a.real*b.img+a.img*b.real;
   return c;
}
complex rationalize(complex  a,complex b,complex c )
{
   complex temp;
   temp.real=b.real/(sqrt(b.real*b.real-b.img*b.img)); 
   temp.img=-b.img/(b.real*b.real-b.img*b.img);
   return multiply(a,temp,c);
}
void main()
{
    complex x,y,z;
    char o[2];
    printf("Enter first complex number values:\n");
    x=input(x);
    print(x);
    printf("Enter second complex number values:\n");
    y=input(y);
    print(y);
    printf("Enter operation:");
    scanf("%s",o);
    switch (o[0])
    {
    case '+':
        z=add(x,y,z);
        break;
    case '-':
        z=subtract(x,y,z);
        break;
    case '*':
        z=multiply(x,y,z);
        break;
    case '/':
        z=rationalize(x,y,z);
        break;
    default:
        printf("Invalid operator\n");
        break;
    }
    print(z);
}