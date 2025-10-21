#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char str1[20];
      int i;
    printf("Enter a string: ");
    gets(str1);
    int n=strlen(str1);
    printf("Length of string is %d.\n",n);
    char *str2=NULL;
    str2=(char*)malloc((n+1)*sizeof(char));
    if(*str2==NULL)
    {
        printf("Memory could no be allocated.\n");
    }
    else{
        for(i=0;i<n;i++)
        {
            *(str2+i)=str1[i];
        }
        *(str2+i)=NULL;
        printf("The copied string is ");
        for(int i=0;i<n;i++)
        {
            printf("%c",*(str2+i));
        }
        printf("\n");
    }
}