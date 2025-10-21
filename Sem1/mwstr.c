#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int size=strlen(str);
    char * str2=NULL;
    str2=(char *)malloc((size+1)*sizeof(char));
    if(str2==NULL)
    {
        printf("Memory could not be allocated");
    }
    else
    {
    int i;
    for(i=0;i<size;i++)
    {
        *(str2+i)=str[i];
    }
    *(str2+i)='\0';
    }
}