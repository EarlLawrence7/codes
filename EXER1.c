#include <stdio.h>

int main() 
{
	//Earl Lawrence O. Baguio
	int num1, num2, sum=0, diff=0, prod=0;
	float quo=0, rem=0;
	//input
	printf("---EXERCISE 1---\n");	
	printf("Enter first number:");
	scanf("%d", &num1);
	printf("Enter second number:");
	scanf("%d", &num2);
	//process
	sum=num1+num2;
	diff=num1-num2;
	prod=num1*num2;
	quo=(float)num1/num2;
	rem=num1%num2;
	//output
	printf("\n\n--------RESULTS-------\n");
	printf("\nThe sum of %d and %d is equals to: %d", num1, num2, sum);
	printf("\nThe difference of %d and %d is equals to: %d", num1, num2, diff);
	printf("\nThe product of %d and %d is equals to: %d", num1, num2, prod);
	printf("\nThe quotient of %d and %d is equals to: %0.2f", num1, num2, quo);
	printf("\nThe remainder of %d and %d is equals to: %0.2f\n", num1, num2, rem);
	//end
	return 0;
}
