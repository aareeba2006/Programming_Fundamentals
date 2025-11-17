#include<stdio.h>
int main(){
    char input;
    printf("Do you want to delete the files [(Y/y),(N/n)]");
    scanf(" %c", &input);
 
    switch(input){
        case 'Y':
        case 'y':
          printf("Deleted Successfully");
        break;

        case 'N':
        case 'n':
          printf("Deletion Cancelled");
        break;

        default :
          printf("Invalid Input");
        break;

        
    }
     return 0;
}