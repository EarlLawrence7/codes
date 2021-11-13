#include<stdio.h>
#include<conio.h>

int main()
{
	
	float mont_sal, ann_net_inc1=0, ann_net_inc2=0, tax=0.85, pag_ibig=100, phil_healt=300;
	char name[10];
	//input
	printf("enter name: ");
	gets(name);
	printf("enter monthly salary: ");
	scanf("%f", &mont_sal);
	//process
	ann_net_inc1=mont_sal*12*tax;
	ann_net_inc2=ann_net_inc1-pag_ibig-phil_healt;
	//output
	printf("\nname: %s", name);
	printf("\nmonthly net income: %0.2f", mont_sal);
	printf("\nannual net income: %0.2f\n", ann_net_inc2);
	getch();
	
//end
	return 0;	
}

