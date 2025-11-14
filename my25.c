#include <stdio.h>

int main(){
   int bb[4] = {11, 22, 33, 44};
    int *p_bb = &bb[0]; // หรือ int *p_bb = bb;

    //อ. อยากพิมพ์ผลรวม ของ 11 กับ 33 ออกมา
    printf("%d\n", bb[0] + bb[2]);

        printf("%d\n", *p_bb + *(p_bb + 2));

        return 0;
}