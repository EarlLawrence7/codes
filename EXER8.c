#include<stdio.h>
#include<math.h>


int main()
{
    //Earl Lawrence O. Baguio
    int X1, Y1, X2, Y2;
    float dist=0, slope=0;
    //input
	printf("----EXERCISE 8----");
    printf("Enter values of Point A:");
    scanf("%d%d", &X1, &Y1);
    printf("Enter values of Point B:");
    scanf("%d%d", &X2, &Y2);
    //process
    dist=sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));
    slope=(double)(Y2-Y1)/(X2-X1); //type cast
    //output
    printf("\nThe distance is: %0.2f", dist);
    printf("\nThe slope is: %0.2f", slope);
    //end
    return 0;
}
