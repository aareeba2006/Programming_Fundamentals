//Maximum of two numbers
#include <stdio.h>
int main( ){
 int var1, var2;

 //Taking value of var1 and var2
 printf("Enter value of var1:");
 scanf("%d", &var1);
 printf("Enter value of var2:");
 scanf("%d",&var2);

 //Using if-else conditions
 if (var1 !=var2){
 printf("var1 is not equal to var2 \n");
      //Nested if-else
   if (var1 > var2) {
printf("var1 is greater than var2 \n");
 }
   else if (var2 > var1) {
   printf("var2 is greater than var1 \n");
 } 
}
 else {
 printf("var1 is equal to var2 \n");
 }
   return 0;
} 