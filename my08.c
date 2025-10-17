#include <stdio.h> // printf(), scanf()

#define showpa printf("-----------------------------\n");

int main(){
    char pro_id[5], pro_name[50]; //string %s
    float pro_price, pro_sale;    //float %f, double %lf 
    
    showpa
    printf("   Calcualate Product Sale\n");
    showpa
    printf("Enter produce Code : ");
    scanf("%s" , &pro_id);
    printf("Enter produce name : ");
    scanf("%s" , &pro_name);
    printf("Enter produce price : ");
    scanf("%f" , &pro_price);
    showpa
   if( pro_price < 1000 ){
        pro_sale = pro_price - (pro_price * 3 / 100.0);
    }else{
        pro_sale = pro_price - (pro_price * 5 / 100.0);
    } 
    printf("Product sale : %.2f\n", pro_sale); 
    showpa

    return 0;
}