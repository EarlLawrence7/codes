#include<stdio.h>
#include<math.h>

int main()
{
	// 1 year = 365 days
	int num_days, years=0, weeks=0, days=0;
	//input
	printf("----EXERCISE 10----\n");
	printf("Enter number of days: ");
	scanf("%d", &num_days);
	//process	
	years=num_days%365/7;
	weeks=num_days/7;
	days=num_days%365% 7/1;
	//output
	printf("\n---RESULTS---\n");
	printf("number of days: %d", days);
	printf("\nnumber of years: %d", years);
	printf("\nnumber of weeks: %d\n", weeks);
	//end	
	return 0;
}
