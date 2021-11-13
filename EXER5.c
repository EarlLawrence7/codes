#include<stdio.h>
#define HR 60
#define MIN 60


int main()
{
	//Earl Lawrence O. Baguio
    int sec_t, hr=0, min=0, sec=0;
    //input
    printf("----EXERCISE 5----");
    printf("Enter time (seconds): ");
    scanf("%d", &sec_t);
    //process
    hr=sec_t/(HR*MIN);
    min=sec_t/(HR)%(MIN);
    sec=sec_t%(HR)%(MIN);
    //output
    printf("\nTime is %d hours, %d minutes and %d seconds", hr, min, sec_t);
    //end
    return 0;
}
