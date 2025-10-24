#include<stdio.h>
int main()
{
    int n;
    
    //Taking number as input
    printf("Enter a number: ");
    scanf("%d",&n);

    //Use for loop
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}