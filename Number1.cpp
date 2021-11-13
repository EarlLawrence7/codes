#include<stdio.h>


int main(){
	
	
	float dist, centi=0;
//input
	printf("Enter distance measure in meters: ");
	scanf("%f", &dist);
//process
	centi=dist*100/1;
//output
	printf("%0.2f meters is %0.2f centimeters ", dist, centi);
//end
	return 0;

}
