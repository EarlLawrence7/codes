#include<stdio.h>
//#include<math.h>
#include<conio.h>



int main() {
	
	int num1, num2, sum=0, diff=0, prod=0, rem=0;
	float quot=0;
	
	//input
	printf("enter first number:");
	scanf("%d", &num1);
	printf("enter second number:");
	scanf("%d", &num2);
	
	//process
	sum=num1+num2;
	diff=num1-num2;
	prod=num1*num2;
	quot=(float)num1/num2;
	rem=num1%num2;
	
	//output
	printf("\nthe sum of %d and %d is equals to: %d", num1, num2, sum);
	printf("\nthe difference of %d and %d is equals to: %d", num1, num2, diff);
	printf("\nthe product of %d and %d is equals to: %d", num1, num2, prod);
	printf("\nthe quotient of %d and %d is equals to: %0.4f", num1, num2, quot);
	printf("\nthe remainder of %d and %d is equals to: %0.4f", num1, num2, rem);
	getch();
	
	
	
	
	
	return 0;
}
