//Program to swap numbers
#include<stdio.h>
int main(){
    //Declaring variables
    int a, b, c;
    //Input first number i.e: a

    printf("Enter the first number: ");
    scanf("%d", &a);

    //Input second number i.e: b
    printf("Enter the second number: ");
    scanf("%d", &b);

    //Display entered numbers
    printf("The numbers you enter are %d %d\n", a, b);

    //Condition to swap numbers
    c=a;
    a=b;
    b=c;

    //Display swapped numbers

    printf("After swapping numbers are %d %d", a,b);
    return 0;
}//End main
