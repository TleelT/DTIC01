#include <stdio.h>

#define SHOWPA printf("---------------------------\n");
#define EMP_NUM 25


int main(){

    double emp_sale[EMP_NUM], sum = 0;

    SHOWPA
    printf("    AVERAGE SALE\n");
    SHOWPA
    for(int x = 0 ; x < EMP_NUM; x++){  //++x, x=x+1, x+=1
        printf("Employee No.%d/Sale is: ", x + 1);
        scanf("%lf", &emp_sale[x]);
    }
    SHOWPA
    for(int x = 0 ; x < EMP_NUM; x++){
        sum = sum + emp_sale[x];
    }   
    printf("Avarage is %.2lf\n", sum / EMP_NUM);
    SHOWPA

    return 0;
}