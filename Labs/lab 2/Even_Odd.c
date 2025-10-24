#include <stdio.h>
int main()
{
   int num;
   printf("Enter a number: ");
   scanf("%d",&num);
   if(num % 2 == 0){
    	printf("It is an Even number");
   }
   else{
   		printf("It is an Odd number");
  } 
  return 0; 
}