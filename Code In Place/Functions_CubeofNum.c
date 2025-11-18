#include <stdio.h>

// function that takes one integer and returns cube of it
int cube(int x) {
    return x * x * x;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = cube(num);   // calling function

    printf("Cube = %d\n", result);

    return 0;
}