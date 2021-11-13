#include<stdio.h>

int main()
{
	int num1, num2, diff=0;
	//input
	printf("first number: ");
	scanf("%d", &num1);
	printf("second number: ");
	scanf("%d", &num2);
	//process
	diff=num1 + ~num2 + 1;
	
	//output
	printf("the difference of %d and %d is equals to %d", num1, num2, diff);
	
	//end
	return 0;	
}

