//Interactive Challenge 2
#include<stdio.h>
int main(){
//Triangle Type Identifier
//Enter side 1, side 2, side 3
int side1,side2,side3;
printf("Enter side 1 =");
scanf("%d" , &side1);
printf("Enter side 2 = ");
scanf("%d" , &side2);
printf("Enter side 3 =");
scanf("%d" , &side3);

if ((side1 + side2 <= side3) || (side2 + side3 <= side1) || (side3 + side1 <= side2)){ //if it is not triangle
     printf("It is not a valid triangle");
} else if ((side1 == side2) && (side2 == side3) && (side1 == side3)){    //for Equilateral triangle
    printf("Triangle is Equilateral");
} else if (side1 == side2 || side2 == side3 || side3 == side1) {          //for Isosceles triangle
    printf("Triangle is Isosceles");
} else {                                                                 //for Scalene triangle
    printf("Triangle is Scalene");
} 
 return 0;
}