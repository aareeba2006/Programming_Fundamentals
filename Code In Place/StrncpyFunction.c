//using strncpy 
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Programming";
    char str2[5];     // 4 letters + '\0'

    strncpy(str2, str1, 4);   // copy only first 4 chars
    str2[4] = '\0';           

    printf("Copied string = %s", str2);

    return 0;
}