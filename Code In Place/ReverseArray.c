#include<stdio.h>
int main(){
    int numbers[4]= {1,2,3,4};
    int temp;

    printf("Original Array : ");
    for(int i = 0; i < 4; i++){
        printf("%d ", numbers[i]);
    }
    printf("\nReverse Array :");
    for(int i = 0; i < 4 / 2; i++){
        temp = numbers[i];
        numbers[i] = numbers[3-i];
         numbers[3-i] = temp;
        
    }                       
      //Reversed Loop
     for(int i = 0; i < 4; i++){
    printf("%d " , numbers[i]);
   }
}
