#include <stdio.h>

#define senpra printf("--------------------------------\n");

int main(){
    int num1,num2,sum;
    senpra
    printf("          Sum Number\n");
    senpra


    do{
        printf("Enter number 1: "); scanf("%d", &num1);
        printf("Enter number 2: "); scanf("%d", &num2);
        sum = num1 + num2;
        printf("Sum of %d and %d is: %d\n",num1, num2, sum);
        senpra
    }while (sum <= 999 );

    return 0;
}