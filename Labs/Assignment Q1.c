#include<stdio.h>
int main(){
    int a,b;
    printf("1.CS Dept \n");
    printf("2.Business Dept\n");
    printf("3.Engineering Dept \n ");
    printf("make your selection\n");
    scanf("%d" , &a);

   switch(a){
     case 1 :
     printf("Available Dept \n");
     printf("a.Data Sci \n");
     printf("b.Ai \n");
     printf("c.CyberSecurity\n");
     scanf("%d" , &b);
    
     switch(b){
        case 1 : printf("a.You selected Data sci\n"); break;
        case 2 : printf("b.You selected Ai\n"); break;
        case 3 : printf("c.You selected Cybersecurity\n");break;
     } break;

   case 2 :
   printf("Available Specialization\n");
   printf("1.Commerce\n");
   printf("2.Purchasing\n");
   scanf("%d" , &b);
   break;
    switch(b){
    case 1 : printf("You selected Commerce\n"); break;
    case 2 :  printf("You selected Purchasing\n"); break;
   }
   case 3:
   printf("Available specializations\n");
   printf("1.Mech Dept\n");
   printf("2.Chemical Dept\n");
   scanf("%d" , &b);
     switch (b){
        case 1 : printf("You selected Mech Dept\n"); break ;
        case 2 : printf("You selected Mech Dept\n"); break ;
     } break;
   
  
   
 }
return 0;

}