
//Sum of a number
#include<stdio.h>
int main(){
    int n,rem;
    int sum=0;
    printf("Enter number =");
    scanf("%d" , &n); 
  
  //Using Do-While Loop
    do {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        
    }
    while(n!=0);
    printf("sum is = %d" , sum);
    return 0;
}