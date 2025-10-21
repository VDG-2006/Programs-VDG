#include<stdio.h>
#include<string.h>
struct Event
{
char name[50];
char type[50];
int duration;
float expenses;
};
struct Event input(struct Event x)
{
    printf("Enter the name of the event\n");
    scanf("%[^\n]s",x.name);
    printf("Enter the type of the event\n");
    scanf("%s",x.type);
    printf("Enter the duration (in days) of this event\n");
    scanf("%d",&x.duration);
    printf("Enter the projected expenses (in lakhs) for the event\n");
    scanf("%f",&x.expenses);
    return x;
}
void print(struct Event x)
{
    printf("Event Name : %s\nEvent Type : %s\nEvent Duration : %d \nProjected Expense : %.1fL\n",x.name,x.type,x.duration,x.expenses);
}
void choice1(struct Event x[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Event %d Details\n",i+1);
        print(x[i]);
    }
}
void choice2(struct Event x[],int n)
{
    char str[25];
    printf("Enter the name of the event to be searched\n");
    scanf("%[^\n]s",str);
    for(int i=0;i<n;i++)
    {
        if(strstr(x[i].name,str)!=NULL)
        {
            printf("%s Event Found\n",x[i].name);
            return;
        }
    }
    printf("No such Event\n");
}
void choice3(struct Event x[],int n)
{
    int c=0;
    char str[10];
    printf("Enter the type of the event to be listed\n");
    scanf("%s",str);
    for(int i=0;i<n;i++)
    {
        if(strcmp(x[i].type,str))
        {
            printf("%s\n",x[i].name);
            c++;
        }
    }
    if(c==0)
        printf("No such type of Event\n");
}
void choice4(struct Event x[],int n)
{
    int max=0;
    for(int i=1;i<n;i++)
    {
        if(x[max].expenses>x[i].expenses)
        {
            max=i;
        }
    }
    print(x[max]);
}
int main()
{
    int n,choice;
    char check[4],y[4]="Yes",y2[3]="No";
    printf("Enter the number of events\n");
    scanf("%d",&n);
    struct Event a[100];
    for(int i=0;i<n;i++)
        a[i]=input(a[i]);
    while(1)
    {
        printf("Menu:\n1) Display all Events\n2) Search for an Event by name\n3) List all events of a particular type\n4) Display the details of the most expensive event\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : choice1(a,n);
            break;
            case 2 : choice2(a,n);
            break;
            case 3 : choice3(a,n);
            break;
            case 4: choice4(a,n);
            break;
            default:printf("Invalid Choice\n");
            break;
        }
        printf("Do you want to continue? Type [Yes / No]\n");
        scanf("%s",check);
        if(strcmp(check,y))
            continue;
        else if(strcmp(check,y2))
            break;
    }
    return 0;
}