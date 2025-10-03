//Sum Of Progression
#include<stdio.h>
int main (){
	float den = 4;
	float sum = 1;

	while(den <= 400) {         
	sum = sum + (1/den);      // 1 + (1/4)
	den = den + 4;            // 4 + 4
	}

	printf ("%f",sum);
	return 0;
}