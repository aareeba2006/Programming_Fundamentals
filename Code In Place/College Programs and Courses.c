//College Programs and Courses
#include<stdio.h>
int main(){
    //for input program
    int year,program;
    printf("Select your program type =\n");
    printf("1. Computer Science\n");
    printf("2. Electrical Engineering\n");
    scanf("%d" , &program);

    switch(program){         //for which program
        case 1:
           printf("You selected computer science as your program type \n");
           printf("Enter your year\n");
           printf("1. First Year \n");
           printf("2. Second year \n");
           scanf("%d" , &year);
         

           switch(year){       //for which year
             case 1:
                printf("You selected first year \n");
                printf("1.Introduction to computer science \n");
                printf("2.Computer architecture\n");
                 break;
             case 2:
                printf("You selected second year \n");
                printf("1. Data Base \n");
                printf("2. Bitwise Operator \n");
               break; 
             }
        break;
        
        case 2:
          printf("You selected electrical engineering as your program type \n");
          printf("Enter your year \n");
          printf("1. First year \n");
          printf("2. Second year \n");
          scanf("%d" , &year);
        

          switch(year){         //for which year
            case 1: 
               printf("You selected first year \n");
               printf("Intro to electrical \n");
               printf("Wires and key \n");
               break;
            case 2:
               printf("You selected second year \n");
               printf("Circuits and their importance \n");
                printf("Circuits maps \n");
            break;
           }
        break;
          
         
    }
    return 0;
}
