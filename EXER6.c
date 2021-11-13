#include<stdio.h>
#define ONE_T 1000
#define FIVE_H 500
#define TWO_H 200
#define ONE_H 100
#define FIFTY 50
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1


int main()
{
	//Earl Lawrence O. Baguio
    int amt, one_t=0, five_h=0, two_h=0, one_h=0;
    int fifty=0, twenty=0, ten=0, five=0, one=0;
    //input
    printf("Enter amount: ");
    scanf("%d", &amt);
    
    one_t=amt/ONE_T;
    five_h=amt%ONE_T/FIVE_H;
    two_h=amt%ONE_T%FIVE_H/TWO_H;
    one_h=amt%ONE_T%FIVE_H%TWO_H/ONE_H;
    fifty=amt%ONE_T%FIVE_H%TWO_H%ONE_H/FIFTY;
    twenty=amt%ONE_T%FIVE_H%TWO_H%ONE_H%FIFTY/TWENTY;
    ten=amt%ONE_T%FIVE_H%TWO_H%ONE_H%FIFTY%TWENTY/TEN;
    five=amt%ONE_T%FIVE_H%TWO_H%ONE_H%FIFTY%TWENTY%TEN/FIVE;
    one=amt%ONE_T%FIVE_H%TWO_H%ONE_H%FIFTY%TWENTY%TEN%FIVE/ONE;
    //output
    printf("\nOutput:");
    printf("\n\n1000 : %d", one_t);
    printf("\n500  : %d", five_h);
    printf("\n200  : %d", two_h);
    printf("\n100  : %d", one_h);
    printf("\n50   : %d", fifty);
    printf("\n20   : %d", twenty);
    printf("\n10   : %d", ten);
    printf("\n5    : %d", five);
    printf("\n1    : %d", one);
    
    return 0;
}
