//Program to print net_salary and tax amount
#include<stdio.h>
int main(){
    //Declaring variables
    float tax_rate, gross_salary, tax, net_salary;
    printf("Enter the tax rate (e.g: 6.0): ");

    // taking tax rate as an input
    scanf("%f", &tax_rate);

    printf("Enter your gross salary (e.g:10000.0): ");

    // taking gross salary as an input
    scanf("%f", &gross_salary);

    // for calculating tax
    tax=(tax_rate/100) * gross_salary;
    net_salary= gross_salary-tax;
    //Displaying tax amount and net_salary
    printf("The tax that needs to be paid is %f", tax);
    printf("\nYour net salary after tax deduction is %f", net_salary);
    return 0;
} //End main