
//Check 4th and 7th bits are on if yes so put them off
//to recieve 8th bit into variable
#include<stdio.h>
 int main(){
    int Number;
    printf("Enter a number");
    scanf("%d" , &Number);

    if((Number & 72)==72) {
        printf("The 4th and 7th bits are On. \n");
        Number=(Number & ~72);
        printf("7th and 4th bits in off position : %d", Number);
    }
    else {
        printf("The 4th and 7th bits are not both on.");
    }

    return 0; 

}