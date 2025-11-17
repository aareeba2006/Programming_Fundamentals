#include<stdio.h>
int main(){
    int total=0;
    char choice;
    printf("Welcome to Snack Ordering System\n");
    printf("Menu:\n");
    printf("B = Burger (Rs. 200)\n");
    printf("F = French Fries (Rs. 50)\n");
    printf("P = Pizza (Rs. 500)\n");
    printf("S = Sandwich (Rs. 150)\n");

    int typesnacks;
    printf("\nEnter the number of types of snacks you want to order (1-4): ");
    scanf("%d", &typesnacks);
    
    int quantity;
    

     if (typesnacks < 1 || typesnacks > 4) {
        printf("Invalid number of snack types.\n");
        return 0;
    }

    // Loop for each snack type
    for (int i = 1; i <= typesnacks; i++) {
        printf("\nEnter choice %d (B/F/P/S): \n", i);
        scanf(" %c", &choice);
         printf("Enter quantity for this item:\n ");
    scanf("%d", &quantity);
 
    switch(choice){
        case 'B':
         total += 200 * quantity;
        break;
        case 'F':
         total += 50 * quantity;
         break;
        case 'S':
        total += 150 * quantity;
        break;
        case 'P':
         total += 500 * quantity;
        break;
        default:
         printf("Invalid choice! Skipping this item.\n");
        break;
    }
 }
    printf("\nTotal charges for your order: Rs. %d\n", total);

    return 0;
     

}