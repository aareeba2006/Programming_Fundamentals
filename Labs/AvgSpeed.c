#include<stdio.h>
int main(){
    int time;
    float d1,d2,d3,d4,d5;

    //taking time
    printf("The time travelled by the car during hours(1-5) =");
    scanf("%d" , &time);

    //taking distance 1 , 2 , 3 , 4, 5
    printf("Enter distance during one hour =");
    scanf("%f" , &d1);
    printf("Enter distance during two hour =");
    scanf("%f" , &d2);
    printf("Enter distance during three hour =");
    scanf("%f" , &d3);
    printf("Enter distance during four hour =");
    scanf("%f" , &d4);
    printf("Enter distance during five hour =");
    scanf("%f" , &d5);

    //for total
    float total;
    total = d1+d2+d3+d4+d5;
    printf("Total distanced travelled : %.2f \n km" , total);

    //for average speed
    float avgspeed;
    avgspeed = total / time;
    printf("Avgerage speed is : %.2f km/hr" , avgspeed);
    return 0;

} 