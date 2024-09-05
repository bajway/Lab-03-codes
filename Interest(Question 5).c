//Program to find interest 
#include<stdio.h>
int main(){
    //Declaring variables
    int principle_amount, time_period, interest_rate;
    float interest;

    //Display message for user
    printf("Enter the Principle amount( b/w 100-1,000,000): ");

    //Input value
    scanf("%d", &principle_amount);

    //Display message for user
    printf("Enter the rate of interest(b/w 5 - 10 ): ");

    //Input value
    scanf("%d", &interest_rate);

    //Display message for user
    printf("Enter the time period(b/w 1-10 years): ");

    //Input value
    scanf("%d", &time_period);

    //Formula to calculate interest
    interest= (principle_amount * interest_rate * time_period)/100;
    printf("Interest for the given inputs is %f ", interest);
    return 0;

}//End main