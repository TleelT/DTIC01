#include <stdio.h>

#define pa printf("--------------------------------\n");

    int main(){
        int number, result;
        int x;

        pa
        printf("    Multiplication Table\n");
        pa
        printf("Enter number: ");
        scanf("%d", &number);
        pa

        for(x = 1 ; x <= 12 ; x = x +1){ // x++, ++x, x += 1
            result = number * x; 
            printf("%d x %d = %d\n", number, x, result);
        }

        pa

    return 0;

}