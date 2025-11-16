//Sum of a Diagonal
#include<stdio.h>
int main(){
   
    int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int sum = 0;

    for(int i=0; i<3; i++){
        sum = sum + arr[i][i];   // diagonal means row index = column index
    }

    printf("Sum of diagonal = %d", sum);

     return 0;
}