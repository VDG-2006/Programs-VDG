#include<stdio.h>
int stringlen(char str[])
{
    int count=0,i=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
int strcomp(char str[],char str2[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(str[i]==str2[i])
        count++;
    }
    return count;
}
void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int size=stringlen(str);
    char str2[100];
    int i;
    for(i=0;i<size;i++)
    {
        str2[i]=str[size-i-1];
    }
    str2[i]='\0';
    int res=strcomp(str,str2,size);
    if(res==size)
    printf("The string is Palindrome\n");
    else
    printf("The string is not Palindrome\n");
}