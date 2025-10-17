#include <stdio.h>

#define senpa printf("-------------------------\n");

int main(){
    int bus_number; //%d

    senpa
    printf("   Bus Number Information\n");
    senpa
    printf("Enter bus num ber : ");
    scanf("%d", &bus_number);
    senpa
    switch( bus_number ){
        case 57:printf("Go to pinklao Bangkunnon\n");
                break;
        case  3:printf("Go to Sanam Luang Ladproao\n");
                break;
        case 71:printf("Go to Hau lumphong Yaowarat\n");
                break;
        case 56:printf("Go to Bang lamphu Sqphan Krungthon\n");
                break;
        case 539:printf("Go to Anusawari Chai Samsen\n");
                break;
        default:printf("No bus number information....T-T\n");
}
    senpa
    
    return 0;
}