//Program to find total fuel cost and total fuel consumed
#include<stdio.h>
int main(){
    //Declaring variables
    float average, fuel_AB, fuel_BA, total_fuel_consumed, cost_AB, cost_BA, total_cost;
    int distance=1207;
    printf("Enter your car's fuel average: ");
    scanf("%f", &average);
    if (average > 0)
    {
        // formula to calculate cost of fuel from A to B and B to A
        cost_AB= (distance/average)*118;
        cost_BA= (distance/average)*123;
        // formula to calculate fuel consumption from A to B and B to A
        // Fuel consumption will be same as distance is equal
        fuel_AB= distance/ average;
        fuel_BA= distance/ average;
        // total cost of fuel for round trip
        total_cost= cost_AB+cost_BA;
        // total litres of fuel consumed for round trip
        total_fuel_consumed= fuel_AB+fuel_BA;
        //output
        printf("Total litres of fuel consumed for round trip is %f", total_fuel_consumed);
        printf("\nThe total cost of fuel for round trip is %f", total_cost);
    }//End if
    else{
        
        printf("Please enter a valid average!");

    }//End else
    return 0;
}//End main
