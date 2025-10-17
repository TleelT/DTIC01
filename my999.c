/*        HW 02       */

//สร้างโปรแกรมคำนวณเงินเดือนสุทธิที่ต้องจ่ายหลังจากจากหักภาษีแล้ว 7% ของเงินเดือน 
//และหักค่าประกันสังคม 3% ของเงินเดือน โดยรับค่ารหัสพนักงาน ชื่อพนักงาน เงินเดือน ทางแป้นพิมพ์ 
//และแสดงผลข้อมูลที่รับมา พร้อมกับรายละเอียดว่าต้องเสียภาษีกี่บาท หักค่าประกันสังคมกี่บาท และเงินเดือนสุทธิที่คำนวณได้ทางหน้าจอ

#include <stdio.h>

#define showline printf("+++++++++++++++++++++++++++\n")
int main() {
    int empID;         
    char name[30];     
    float salary;     
    float tax, social, netSalary;

    showline;
    printf(" Employee Salary Calculation\n");
    showline;
    printf(" Enter Employee ID: ");
    scanf(" %d", &empID);
    printf(" Enter Employee Name: ");
    scanf(" %[^\n]", name);
    printf(" Enter Employee Salary: ");
    scanf(" %f", &salary);
    
    tax = salary * 0.07;        
    social = salary * 0.03;     
    netSalary = salary - tax - social; 
    
    showline;
    printf(" Employee ID: %d\n", empID);
    printf(" Employee Name: %s\n", name);
    printf(" Gross Salary: %.2f Baht\n", salary);
    printf(" Tax (7%%): %.2f Baht\n", tax);
    printf(" Social Security (3%%): %.2f Baht\n", social);
    printf(" Net Salary: %.2f Baht\n", netSalary);
    showline;

    return 0;
}