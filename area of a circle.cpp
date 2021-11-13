#include <stdio.h>
#include <conio.h>
#define PI 3.1416
int main() {
	float radius, area;

	printf("|----------RADIUS OF A CIRCLE----------|\n");
	printf("Enter radius of circle:");
	scanf("%f",&radius);

	area=PI*radius*radius;
		
	printf("Area of circle : %0.4f\n", area);
	getch();
return 0;
}
