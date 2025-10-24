//Eligible of voting
#include<stdio.h>
int main(){
    int age;
    int hasID;  //1=yes  0=no

    //Taking age as input
    printf("Enter your Age = ");
    scanf("%d" , &age);

    //Using if-else 
    if(age >= 18) {
    printf("Do you have ID :");
    scanf("%d" , &hasID);

        if(age >=18 && hasID == 1){
        printf("You are eligible for voting.");
      }
        else {
            printf(" You meet the age requirement but cannot vote without ID. ");
        }
    }
    else {
        printf("A person is not eligible of voting.");
    }
    return 0;
}