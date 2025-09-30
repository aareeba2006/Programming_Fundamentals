
//By Quadratic Equation
#include<stdio.h>
int main(){
    int a,b,c;;
    printf("Enter number 'a':" );
    scanf("%d" , &a);
    printf("Enter number 'b':" );
    scanf("%d" , &b);
    printf("Enter number 'c':" );
    scanf("%d" , &c);
 
    float formula_1;
    formula_1 = (-b+sqrt((b*b-4*a*c)))/(2*a) ;
     printf("The roots of the equation are %.2f \n" , formula_1);
    float formula_2;
    formula_2 = (-b-sqrt((b*b-4*a*c)))/(2*a)  ;
    printf("The roots of the equation are %.2f \n" ,formula_2);
    
return 0;
}
