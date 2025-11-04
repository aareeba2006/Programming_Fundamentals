
//Printing Pattern
#include<stdio.h>
int main(){
    int n;

 //taking input 
 printf("Enter number =");
 scanf("%d" , &n);
int i;
int j;
//using nested For loop
 for(i=1 ; i<=n  ; i++){
      for(j=1 ; j<= i ; j++){
           printf("*");
      }    
  printf("\n");
  
   }
    
    return 0; 
}
