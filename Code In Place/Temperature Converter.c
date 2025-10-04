#include<stdio.h>
int main() {
    float celsius, Fahrenheit;
    //Take input from user
    printf("Enter temperature in celsius = ");
    scanf("%f" , &celsius);

    //Formula
     Fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit is = %.2f " , Fahrenheit);

    /*
    Interative Challenge : 

    Input : 100
    Output : 212.00
    Observation : At 100C , water boils.

    Input : 0
    Output : 32.00
    Observation : At 0C , water freezes.

    Input : -40
    Output : -40.00
    Observtion : At -40C , Celsius and Fahrenheit are equal.
    */
    
    return 0;
}