#include<stdio.h>
int prime_or_not(int number)
{
    int count=1,j;
    for(j=2;j<=number/2;j++)
    {
        if(number%j==0)
        {
            count=0;
            break;
        }
    }
    return count;
}
void main()
{
    int lower_limit,upper_limit,i,count;
    printf("Enter lower limit of the interval:");
    scanf("%d",&lower_limit);
    printf("Enter upper limit of the interval:");
    scanf("%d",&upper_limit);
    for(i=lower_limit;i<=upper_limit;i++)
    {
        count=prime_or_not(i);
        if(count==1)
        {
            printf("%d is prime.\n",i);
        }
    }
}