
//Simple Calculator
#include<stdio.h>
int main(){
    int num1,num2;
    char opera;
    printf("Enter a number 1 = \n"); //taking number 1
    scanf("%d" , &num1);
    printf("Enter a number 2 =\n");  //taking number 2
    scanf("%d" , &num2);
    printf("The char operators are (+,-,*,/,%) = ");  //taking operator as input
    scanf(" %c", &opera);

    switch(opera) {
        case '+' :      //for +
        printf("Result : %d+%d = %d \n", num1,num2, num1 + num2);
        break;
        case '-' :      //for -
        printf("Result : %d-%d=%d \n " ,num1,num2, num1 - num2);
        break;
        case '*' :      //for *
        printf("Result : %d*%d=%d\n" ,num1,num2, num1 * num2);
        break; 
        case '/' :      //for /
        if (num1 == 0) {
            printf("Your result is zero");
        }  else {
            printf( "Result : %d / %d = %d\n" ,num1,num2, num1/num2); 
        }
        break;
        case '%' :       //for %
         printf("Result : %d %% %d = %d\n" ,num1,num2, num1 % num2);
         break;
        
        }
     return 0;
}