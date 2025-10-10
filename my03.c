/*
  " " double quote, ' ' single quote, # hash, / slash, \ backslash
   : colon, ; semicolon, ( ) round bracket, [ ] square bracket
   { } curly bracket, < > angle bracket, | pipe, & ampersand
   ` backtick ^ caret
*/
#include "stdio.h" //หรือ <stdio.h>

int main(){
    //แสดงเฉพาะที่อยู่ใน "" แรกเท่านั้น โดยเขียนยังไงแสดงอย่างนั้น ***ยกเว้นรหัสแบ็คสแลช กับ format spec/format code
    //แต่หากมีอะไร "" แรก จะต้องนำมาแสดงผลที่ "" แรกเสมอ โดยใช้ format spec/format code
    printf("Hello....\n");
    printf("AAA %d BBB%s %d^_^\n", 555, "Wow Wow Wow", 100+200);

    printf("Hi\n\n\nHey\tHoo\t\t\tWow\\");

    return 0;
}