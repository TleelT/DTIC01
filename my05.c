#include <stdio.h>

int dataA = 100; //Global variabel
const int info1 = 111;

void showData(){
    int dataB = 200;    //Local variable  ใช้ได้เฉพาะภายใน Code block {}
    int dataE;
    const int info2 = 222; 
    const int info3;
    //info1 = 333; error เพราะเป็น const เปลี่ยนคำไม่ได้
    //info2 = 444; error เพราะเป็น const เปลี่ยนคำไม่ได้
    //ingo3 = 555; error เพราะเป็น const กำหนดค่าทีหลังไม่ได้ ต้องกำหนดตั้งตั้งแต่ตอน decalare
    printf("dataA= %d\n", dataA);
    printf("dataB= %d\n", dataB);
    // printf("dataC = %d\n", dataC); error
    dataE = 400;
}

int main (){
    int dataC = 300; // local Variable ใช้ได้เแพาะภายใน code block {}
    printf("dataA= %d\n", dataA);
    printf("dataA= %d\n", dataC);
    //printf("dataB = %D\n" dataB); error
    dataC = 400;
    //dataB = 999;
    //dataE = 555;

    return 0;
}