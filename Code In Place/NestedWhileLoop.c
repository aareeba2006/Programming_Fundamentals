
//Printing Multiplication Table till 5
#include<stdio.h>
int main(){

    //Using Nested While Loop
    int i=1;
     while(i<=5){
      int j=1;
        printf("Multiplication of Table %d \n " , i);
         while(j<=10){
            printf("%d*%d = %d \n" , i,j,i*j);
              j++;
       }
           i++;
       }
        return 0;
    }
   
    
    
