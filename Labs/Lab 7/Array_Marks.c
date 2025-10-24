//Array
#include<stdio.h> 
int main()
{ 
	int avg,i,sum = 0; 
	int marks[5];  
	for(i=0;i<=4;i++){ 
		printf("Student marks are: "); 
		scanf("%d", &marks[i]); 
	} 
	for(i = 0; i<=4; i++){
		sum = sum + marks[i];
	}
		avg = sum/5; 
		printf("Average marks is:%d \n", avg); 
		printf("Total marks are :%d \n", sum);
	return 0;
}