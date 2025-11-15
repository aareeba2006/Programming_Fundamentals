//Interactive Challenge 4
#include<stdio.h>
int main(){
    //Character Classification 
    //Taking character as input
    char ch;
    printf("Enter a character = ");
    scanf("%c" , &ch);
    
    if(ch >= 'A' && ch <= 'Z' ){         //for Upper case letter
        printf("'%c' is a uppercase letter  " , ch);
    }  else if(ch >= 'a' && ch <= 'z'){            //for Lowercase letter
        printf(" '%c' is a lowercase letter " , ch);
    }  else if (ch >= '0' && ch <= '9'){
        printf("'%c' is a digit  " , ch);             //for digit
    } else{
        printf("'%c' is a special character " , ch);    //for special character
    }

    return 0;

}