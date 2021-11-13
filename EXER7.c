#include<stdio.h>
int main()
{
    int num1, digi1=0, digi2=0, digi3=0, digi4=0, digi5=0;
    //input
    printf("----EXERCISE 7----");
    printf("Enter a 5 digit number:");
    scanf("%d", &num1);
    
    digi1=num1%10000%1000%100%10/1;
    digi2=num1%10000%1000%100/10;
    digi3=num1%10000%1000/100;
    digi4=num1%10000/1000;
    digi5=num1/10000;
    printf("\n---Result---\n");
    printf(": %d%d%d%d%d", digi1, digi2, digi3, digi4, digi5);
    return 0;
}
