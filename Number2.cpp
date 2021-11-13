#include<stdio.h>

int main()
{
	float areatr, htr, btr=0;
	//input
	printf("Enter the area of a triangle: ");
	scanf("%f", &areatr);
	printf("\nEnter the height of the triangle: ");
	scanf("%f", &htr);
	//process
	btr=(float)(2*areatr)/htr;
	//output
	printf("\nTriangle with area of %0.2f had base of %0.2f", areatr, btr);
	
	//end
	return 0;	
}

