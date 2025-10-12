#include<stdio.h>
int main() {
//Division Safety  Checker
   float numerator;
    float denominator;
    float result;
    printf("Enter a numerator :");
    scanf("%f" , &numerator);

    printf("Enter a denominator :");
    scanf("%f" , &denominator);

    if(denominator == 0){
        printf("Error message");
    }
    
    else{
            result = numerator / denominator;
             printf("result is : % .2f" , result);
      }
   
    return 0;

    
}