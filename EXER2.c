#include <stdio.h>

int main() 
{	
	//Earl Lawrence O. Baguio
	float len, wid, perim=0, area=0;
	//input
	printf("----EXERCISE 2----\n");
	printf("enter length:");
	scanf("%f",&len);
	printf("enter width:");
	scanf("%f", &wid);
	//process
	area=len*wid;
	perim=2*len+2*wid;
	//output
	printf("\n---RESULTS---");
	printf("\narea of the rectangle is: %f", area);
	printf("\nperimeter of the rectangle is: %f", perim);
	//end
	return 0;
	
}
