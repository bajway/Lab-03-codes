#include<stdio.h>
int main(){
    int X1, X2, Y1, Y2;
    X1=5; X2=3; Y1=4; Y2=2;
    float Slope;
    Slope= (Y2-Y1)/(X2-X1);
    printf("The slope of the line is %.3f", Slope);
    return 0;
}