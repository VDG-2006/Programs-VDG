#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char str1[10];
    printf("Enter a string: ");
    scanf("%s",str1);
    int n=strlen(str1);
    printf("Size of string is %d\n",n);
    char str2[n];
    for (int i=0;i<n;i++)
    {
        str2[i]=str1[n-i-1];
    }
    printf("initial string is %s\n",str1);
    printf("string after reversal is %s\n",str2);
    int count=0;
    for (int i=0;i<n;i++)
    {
        if(str1[i]==str2[n-i-1])
        {
        count++;
        }
    }
    if(count==n){
    printf("The string is palindrome.\n");}
    else{
    printf("The string is not palindrome.\n");}
}