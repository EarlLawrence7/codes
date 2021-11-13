#include<stdio.h>
#define TAX 0.88

int main ()
{
	int	v1, v2, v3, v4, v5, amt_paid;
	float tot_amt1=0, tot_amt2=0, tot_amt3=0;
	char viand1[20], viand2[20], viand3[20], viand4[20], viand5[20];
	 //input
	printf("enter name of first viand: ");
	gets(viand1);
		printf("enter price of first viand: ");
		scanf("%d", &v1);
			
	printf("\nEnter name of second viand: ");
	gets(viand2);
		printf("\nEnter price of second viand: ");
		scanf("%d", &v2);
		
	printf("\nenter name of third viand: ");
	gets(viand3);
		printf("\nEnter price third viand: ");
		scanf("%d", &v3);
		
	printf("\nEnter name of fourth viand: ");
	gets(viand4);
		printf("\nEnter price fourth viand: ");
		scanf("%d", &v4);
		
	printf("\nEnter name of fifth viand: ");
	gets(viand5);
		printf("\nEnter price fifth viand: ");
		scanf("%d", &v5);
	
	printf("\nPlease enter amount to be paid: ");
	scanf("%d", &amt_paid);
	//process
	tot_amt1=v1+v2+v3+v4+v5;
	tot_amt2=tot_amt1-amt_paid;
	tot_amt3=tot_amt2*TAX;
	//output
	printf("\nchange is: %0.2f", tot_amt3);
	
	//end
	return 0;
}
