//sinfunction
#include<stdio.h>
#include<math.h>
void main()
{
    float a=0,b=0,x,i=1,n,f=1,j=1,k=3,sin,l=1,m=1;
    printf("Enter x value in radians:");
    scanf("%f",&x);
    printf("Enter number of terms:");
    scanf("%f",&n);
    while(i<=n)
    {
        while(j<=i)
        {
        f=f*j;
        j++;
        }
        a=a+(pow(x,i)/f);
        i=i+4;
    }
    while(k<=n)
    {
        while(l<=k)
        {
            m=m*l;
            l++;
        }
        b=b+(pow(x,k)/m);
        k=k+4;
    }
    sin=a-b;
    printf("%f",sin);
}