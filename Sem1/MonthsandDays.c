#include<stdio.h>
void main()
{
    int d,m[12]={31,28,31,30,31,30,31,31,30,31,30,31},i;
    printf("Enter number of days:");
    scanf("%d",&d);
    for(i=0;d>m[i];i++)
    {
        d=d-m[i];
    }
    printf("date/month:%d/%d",d,i);
}