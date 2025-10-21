#include<stdio.h>
void swap(int * x,int * y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("Value at a before swap is %d\n",a);
    printf("Value at b before swap is %d\n",b);
    swap(&a,&b);
    printf("Value at a after swap is %d\n",a);
    printf("Value at b after swap is %d\n",b);
}