//Strcat Function
#include<stdio.h>
#include<string.h>
int main(){
    char firstname[20] = "Areeba";      // first name
    char lastname[20] = " Ilyas";      // last name 

    strcat(firstname, lastname);    // firstname = firstname + lastname

    printf("Full name = %s", firstname);

    return 0;

}