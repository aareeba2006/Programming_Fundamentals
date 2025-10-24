#include<stdio.h>
int main(){
    int a,b,c;

    //Taking value of a and b
    printf("Enter value of a =");
    scanf("%d" , &a);
    printf("Enter value of b =");
    scanf("%d" , &b);
 
    //Swapping of value
    c=a;
    a=b;
    b=c;

    printf("The numbers are swapped = \n");
    printf("The value of a : %d \t The value of b : %d ", a,b);
    return 0;  

} 