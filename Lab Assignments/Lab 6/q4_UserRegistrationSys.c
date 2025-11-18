#include<stdio.h>
int main(){
    char name[5];
    char pass[6];
    char loginUser[5];
    char loginPass[6];
    char username[5];
    int hasdigit=0,hasUpper=0,hasLower=0;
    printf("Enter a user name :");
    
    for(int i=0; i<5; i++){
   scanf(" %c", &name[i]);
   }
   
   printf("Enter password : \n");
   
   for(int i=0; i<6; i++){
    scanf(" %c", &pass[i]);
    if(pass[i] >='0' && pass[i] <= '9'){
       hasdigit=1;
       continue;
    }
    else if(pass[i] >= 'A' && pass[i] <= 'Z'){
        hasUpper=1;
        continue;
    }
    else if(pass[i] >= 'a' && pass[i] <= 'z'){
        hasLower=1;
        continue;
    }
 }
 while(1){
    if(hasUpper && hasLower && hasdigit) {
        printf("Password is valid.\n");
        break;
    } else {
        printf("Password must have at least 1 digit, 1 uppercase and 1 lowercase letter.\n");
        break;
    }
}
    printf("Account created successfully");
    
    while(1){
        printf("\nLogin: \n");
        printf("Username: ");
        for(int i=0; i<5; i++){
            scanf(" %c",&loginUser[i]);
        }
        printf("Password: ");
        for(int i = 0; i < 6; i++) {
            scanf(" %c", &loginPass[i]);
        }
        
        //check username and password
        int userMatch = 1, passMatch = 1;
        for(int i = 0; i < 5; i++) {
            if(loginUser[i] != name[i]) {
                userMatch = 0;
                break;
            }
        }
        for(int i = 0; i < 6; i++) {
            if(loginPass[i] != pass[i]) {
                passMatch = 0;
                break;
            }
        }
        
        if(userMatch && passMatch){
            printf("Welcome, you are now logged in!\n");
            break;
        }
        else {
            printf("Incorrect username or password. Try again.\n");
            continue; // ask login again
        }  
    
   
    }
        return 0;
    }