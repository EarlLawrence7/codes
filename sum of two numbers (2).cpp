#include <stdio.h>
int main()
{
int n,l,f,sum;
printf("Enter Two Digit Number: ");
scanf("%d",&n);
l=n%10;
f=n/10;
printf("\nFirst Digit = %d \nLast Digit = %d\n",f,l);
sum=l+f;
printf("\nSum Both Digit = %d",sum);

return 0;
}
