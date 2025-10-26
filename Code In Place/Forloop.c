
//Factorial of a number
#include<stdio.h>
int main(){
    int n;

    //initialize the factorial
    int fact=1;

    //taking input
    printf("Enter number =");
    scanf("%d" , &n);

    //using for loop
    for(int i=1 ; i<=n ; i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n, fact);
return 0;
} 

