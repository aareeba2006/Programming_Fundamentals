#include<stdio.h>
int main() {
    //Even / odd number checker
    int number;
    printf("Enter a number :");
    scanf("%d" , &number);

    if(number % 2 == 0){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
    return 0;
}