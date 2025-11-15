#include<stdio.h>
int main()
{
	int arr[3];
	// Declaring pointer
	int *ptr;
	int i;

	// ptr = &arr[0]
	ptr = arr;

	// Using For Loop
	for (i = 0; i < 3; ++i){
	   *(ptr+i) = i+1;
	}
	
	printf("\nValue using pointers are : \n");
	for (i = 0; i < 3; i++){
	  printf("%d\n", *(ptr+i));
	}
	
	printf("\nAddress of value using pointers are : \n");
	for (i = 0; i < 3; i++){
	  printf("%p\n", ptr+i);
	}

	return 0;
}