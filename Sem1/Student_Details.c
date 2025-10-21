#include<stdio.h>
typedef struct 
{
    int R_No;
    char Name[25];
    int sub[5];
    int tot=0;
}student;
void main()
{
    student a[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter roll number of student:");
        scanf("%d",&a[i].R_No);
        printf("Enter name of Student: ");
        scanf("%s",a[i].Name);
        for(int j=0;j<5;j++)
        {
            printf("Enter marks of student in subject %d:",j+1);
            scanf("%d",&a[i].sub[j]);
        }
        for(int j=0;j<5;j++)
        {
            a[i].tot=a[i].tot+a[i].sub[j];
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i].R_No);
        printf("%s",a[i].Name);
        printf("\t");
        for(int j=0;j<5;j++)
        {
            printf("%d\t",a[i].sub[j]);
        }
        printf("%d\n",a[i].tot);
    }
}