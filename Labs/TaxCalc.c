//Tax Calculation
#include <stdio.h>
int main(){

	int salary,taxRate,afterTaxSalary;
    float tax;

    //Taking input
    printf("Tax Calculator!!!\n");
    printf("Enter the salary:");
    scanf("%d",&salary);
    printf("Enter the Tax rate:");
    scanf("%d",&taxRate);

    //for tax
    tax = (salary*taxRate)/100;

    printf("Your Tax is %.2f",tax);

    //for After Salary Tax
    afterTaxSalary = salary-tax;

    printf("\nAfter tax your salary is %d",afterTaxSalary);
    return 0;

}