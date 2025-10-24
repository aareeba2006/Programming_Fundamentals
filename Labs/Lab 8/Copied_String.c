#include <stdio.h>
 #include <string.h>
 int main()
{
    char source[] = "Hello World";
    char destination[20];
    strcpy(destination, source);
    printf("Copied string: %s", destination);
    return 0;
 }