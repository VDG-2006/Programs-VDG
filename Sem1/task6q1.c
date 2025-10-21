#include<stdio.h>
int factnorec(int x)
{
    int re=1;
    for(int i=1;i<=x;i++)
    {
            re=re*i;
    }
    return re;
}
int factrec(int y)
{
    if(y==0)
    return 1;
    else
    return y*factrec(y-1);
}
void main()
{
    int n,fact=1,ui;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter 0 for recursion or 1 for no recursion:");
    scanf("%d",&ui);
    if(ui==0)
    {
        fact=factrec(n);
        printf("factorial is %d\n",fact);
    }
    else if(ui==1)
    {
    fact=factnorec(n);
    printf("factorial is %d\n",fact);
    }
    else
    printf("invalid input\n");
}