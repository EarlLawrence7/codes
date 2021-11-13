#include<stdio.h>


int main()
{
	//Earl Lawrence O. Baguio
    float faren, celci=0;
    //input
    printf("----EXERCISE 4----");
    printf("Enter the temperature in Farenheit:");
    scanf("%f", &faren);
    printf("Farenheit temperature is: %f", faren);
    //process
    celci=(faren-32)*5/9;
    //output
    printf("\nCelcius temperature is: %f", celci);
    //end
    return 0;
}
