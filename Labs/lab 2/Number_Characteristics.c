#include <stdio.h>
int main()
{
   int num;
   printf("Enter a number: ");
   scanf("%d",&num);

   //Using If-Else
   if(num > 0){
    	printf("Positive number");
   }
   else if(num < 0){
		printf("negative number");
   }
  else{
    	printf("Zero");
   }
   return 0;
}