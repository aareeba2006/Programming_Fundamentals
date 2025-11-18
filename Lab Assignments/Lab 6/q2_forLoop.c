
#include<stdio.h>
int main(){
    int first = 1, second = 1, next;
    int sum3 = 0, sum5 = 0, sum7 = 0;

    printf("Fibonacci terms up to 1000 are:\n");
    printf("%d %d", first, second);

    for(next = first + second; next <= 1000; next = first + second){
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
        first = second;
        second = next;
    }

    printf("\n\nSum of Fibonacci numbers divisible by:\n");
    printf("3 = %d\n", sum3);
    printf("5 = %d\n", sum5);
    printf("7 = %d\n", sum7);

    return 0;
}
