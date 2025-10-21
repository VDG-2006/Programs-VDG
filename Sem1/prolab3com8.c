#include<stdio.h>
void main()
{
    float basic_salary,hra,da,net_salary;
    printf("Enter basic salary of the employee:");
    scanf("%f",&basic_salary);
    if(basic_salary<=10000)
    {
        hra=basic_salary*20/100;
        da=basic_salary*80/100;
        net_salary=basic_salary+hra+da;
        printf("The net salary of the employee is %.2f.\n",net_salary);
    }
    else if(basic_salary<=20000)
    {
        hra=basic_salary*25/100;
        da=basic_salary*90/100;
        net_salary=basic_salary+hra+da;
        printf("The net salary of the employee is %.2f.\n",net_salary);
    }
    else
    {
        hra=basic_salary*30/100;
        da=basic_salary*95/100;
        net_salary=basic_salary+hra+da;
        printf("The net salary of the employee is %.2f.\n",net_salary);
    }
}