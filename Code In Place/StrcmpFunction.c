//Comparing using strings using strcmp
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);
 
    //Using if-else
    if(strcmp(str1, str2) == 0) {
        printf("Equal");
    } 
    else {
        printf("Not Equal");
    }

    return 0;
}