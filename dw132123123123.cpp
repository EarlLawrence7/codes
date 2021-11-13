#include <stdio.h>
#include <conio.h>

int main() {
	
	int len, wid, perim=0;
	
	printf("------Perimeter of a Rectangle------\n");
	printf("enter length:");
	scanf("%d",&len);
	printf("enter width:");
	scanf("%d", &wid);

	perim=2*len+2*wid;
	
	printf("perimeter of the rectangle is: %d\n", perim);
	getch();
	
	return 0;
	
}
