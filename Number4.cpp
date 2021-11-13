#include<stdio.h>
#include<conio.h>

int main() {
	float weight, calories=0;
	char name[10];
	//input
	printf("enter name: ");
	gets(name);
	printf("enter weight in kilos: ");
	scanf("%f", &weight);
	//process
	calories=(float)weight*22.5;
	//output
	printf("%s is %0.2f needs %0.2f calorie to take everyday", name, weight, calories);
	//end
return 0;	
}

