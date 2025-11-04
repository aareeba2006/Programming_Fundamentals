//Reverse Number
#include<stdio.h>
int main(){
    int n;
int rem;
 int rev=0;
 //taking input 
 printf("Enter number =");
 scanf("%d" , &n);
  
//Using While Loop
 while(n!=0){
    rem=n%10;
    rev=rev*10 + rem;
   n=n/10;

}

printf("%d" ,rev);

return 0;
}
