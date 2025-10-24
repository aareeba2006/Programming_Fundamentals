#include <stdio.h>
 #include <string.h>
 int main(void) 
 {
    char a[20] = "Areeba";
    char b[] = " Ilyas";
    strcat(a,b);
    printf("Result: %s", a);
 }