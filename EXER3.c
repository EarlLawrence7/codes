#include<stdio.h>
#define FOOT_INCH 12
#define INCH 2.54


int main()
{
	//Earl Lawrence O. Baguio
	float num1, num2;
	float dist_feet=0, dist_inch=0;
	//input
		printf("---EXERCISE 3---\n");
	printf("Enter distance(feet): ");
		scanf("%f", &num1);
	//process
	dist_feet=num1*FOOT_INCH*INCH;
	//output
	printf("%f feet = %f cm", num1, dist_feet);
	//input
	printf("\nEnter distance(inches): ");
		scanf("%f", &num2);
	//process
		dist_inch=num2*INCH;
	//output
	printf("%f inches = %f cm", num2, dist_inch);
	//end
	return 0;
}
