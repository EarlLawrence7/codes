#include <stdio.h>


int main() {
	//5 percent discount
	float numpen, disc=0.95, pen=100.75, total=0;

	
	printf("how many pens:");
	scanf("%f",&numpen);
	
	total=numpen*pen*disc;
	
	
	printf("Total amount: %0.2f", total);

return 0;
}
