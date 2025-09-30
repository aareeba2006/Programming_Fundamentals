
//Online Shopping Store 
#include<stdio.h> 
int main(){ 
    int sp,cp,s;
     printf("Enter your total amount :");
    scanf("%d" , &cp);
     if(cp <= 1999 ){
        s=cp*0.50;
        printf("Your amount is : %d\n" , cp );
        printf("Your total discount is : %d\n ", s);
        sp=cp-s;
        printf("Your amount after discount is : %d \n ", sp);
 }    else if (cp >= 2000 && cp <= 4000) { 
    s=cp*0.20;
        printf("Your amount is : %d\n ", cp );
          printf("Your total discount is : %d\n ", s);
        sp=cp-s;
        printf("Your amount after discount is : %d \n ", sp);
}    else if (cp >=4001 && cp <=6000) { 
        s=cp*0.30;
        printf("Your amount is: %d\n ", cp );
        printf("Your total discount is : %d\n" , s);
        sp=cp-s; 
        printf("Your amount after discount is : %d \n ", sp); 
}    else { 
         s=cp*0.50; 
         printf("Your amount is: %d\n" , cp );
         printf("Your total discount is : %d\n ", s);
        sp=cp-s; 
         printf("Your amount after discount is : %d \n ", sp);
}
 return 0;

 }
           