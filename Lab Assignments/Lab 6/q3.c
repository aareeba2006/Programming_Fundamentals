#include<stdio.h>
int main(){
    int digits[5];
    printf("Enter 5-digit number : \n");
    for(int i=0; i<5; i++){
      scanf("%1d",&digits[i]);
    }

    int original,sum=0,count=0;
    int reversed=0,digit;
   for(int i=0; i<5; i++){
      sum += digits[i];
   }
   original = sum;

     
     if(sum % 2 == 0){

       for(int i=1; i<=sum; i++){
         if(sum%i==0){
           count++;
          }
        }
           if(count == 2){
           printf("Prime Number ! \n");
         }
           else{
           printf("Not a prime number \n");
         }
        
       }

      else {
        
         while(sum != 0){
          digit=sum % 10;
          reversed= reversed * 10 + digit;
          sum /= 10;
         }
         if(original == reversed){
          printf("Palindrome Number!\n");
         }
          else {
          printf("Not a Palindrome.\n");
        }
         
       }
      }
    

    


