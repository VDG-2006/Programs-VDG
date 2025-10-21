#include<stdio.h>
#include<stdlib.h>
#define size 50
void menu()
{
    printf("MENU:\n");
    printf("1. Create an array\n");
    printf("2. Modify array\n");
    printf("3. Display array\n");
    printf("4. Insert element\n");
    printf("5. Delete element\n");
    printf("6. Exit\n");
}
void create(int *a,int n)
{
    a=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    printf("Array created successfully!\n");
}
void modify(int *a, int n)
{
    if(n==0)
    {
        printf("Array is Empty!\n");
        return;
    }
    int pos;
    printf("Enter position to be modified:");
    scanf("%d",&pos);
    if(pos<1||pos>n)
    {
        printf("Invalid Position!\n");
        return;
    }
    int value;
    printf("Enter the value to be replaced:");
    scanf("%d",&value);
    a[pos-1]=value;
    printf("Element modified successfully!\n");
}
void display(int *a, int n)
{
    if(n==0)
    {
        printf("Array is Empty!\n");
        return;
    }
    printf("Elements in the array are:\n");
    for(int i=0;i<n;i++)
        printf("%d\n",*(a+i));
}
void insert(int * a, int *n)
{
    int pos;
    printf("Enter position to be inserted:");
    scanf("%d",&pos);
    if(pos<1||pos>*n)
    {
        printf("Invalid Position!\n");
        return;
    }
    int value;
    printf("Enter the value to be inserted:");
    scanf("%d",&value);
    (*n)++;
    for(int i=*(n-1);i>=pos;i--)
    {
        *(a+i)=*(a+i-1);
    }
    *(a+pos-1)=value;
    printf("Value sucessfully inserted.\n");
}
void delete(int *a, int *n)
{
    if(*n==0)
    {
        printf("Array is Empty!\n");
        return;
    }
    int pos;
    printf("Enter position to be modified:");
    scanf("%d",&pos);
    if(pos<1||pos>*n)
    {
        printf("Invalid Position!\n");
        return;
    }
    (*n)--;
    for(int i=pos-1;i<*n;i++)
    {
        *(a+i)=*(a+i+1);
    }
    printf("Position sucessfully deleted.\n");
}
void main()
{
    int n=0,*a,ch;
    while(1)
    {
        menu();
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter size of array:");
            scanf("%d",&n);
            create(a,n);
            break;
            case 2:modify(a,n);
            break;
            case 3:display(a,n);
            break;
            case 4:insert(a,&n);
            break;
            case 5: delete(a,&n);
            break;
            case 6: ch=0;
            break;
            default:printf("Invalid Input!\n");
            break;
        }
        if(ch==0)
            return;
    }
}