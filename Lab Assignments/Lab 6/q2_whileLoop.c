//Using while loop
#include<stdio.h>
int main(){
    int first=1,sec=1;
    int next;
    int sum3=0,sum5=0,sum7=0;

    printf("Fibonacci terms up to 1000 are:\n");
    printf("%d %d", first, sec);

    while(1){
        next=first+sec;
        if(next > 1000) break;
        
        printf(" %d", next);

        if(next % 3 == 0){
            sum3 += next;
        }
        if(next % 5 == 0){
            sum5 += next;
        }
        if(next % 7 == 0){
            sum7 += next;
        }
        
        first=sec;
        sec=next;
        
    }

    printf("\nSum of Fibonacci terms divisible by : \n");
    printf("3 = %d\n",sum3);
    printf("5 = %d\n",sum5);
    printf("7 = %d\n",sum7);
    return 0;
}
        
        