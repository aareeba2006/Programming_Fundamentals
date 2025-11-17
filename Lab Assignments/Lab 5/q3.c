#include<stdio.h>
int main(){
    int NTS,FSC,marks;
    printf("Enter NTS marks =");
    scanf("%d", &NTS);
    printf("Enter FSC marks =");
    scanf("%d", &FSC);

    printf("Checking Person is eligible for Oxford.\n");
       
        if(NTS > 70 && FSC > 70){
            printf("Eligible for IT\n");
        } 
        else if(FSC > 70 && NTS > 60){
            printf("Eligible for Electronics.\n");
        }
        else if (FSC > 70 && NTS > 50){
            printf("Eligible for Telecommunication\n");
        }
         else {
        printf("Person is not eligible for Oxford\n");
        }
    
    printf("Checking Person is eligible for MIT.\n");
     if(FSC <=  70 && FSC >= 60 && NTS >= 50){
            printf("Eligible for IT");
        }
        else if(FSC <= 59 && FSC >= 50 && NTS >= 50){
            printf("Eligible for Chemical.\n");
        }
        else if (FSC >  40 && FSC <50 && NTS >= 50){
            printf("Eligible for Computer\n");
        }
         else {
        printf("Person is not eligible for mit\n");
        }
    
   return 0;
}