//ป้อนชื่อ-สกุล ชื่อเล่น อายุ เงินเดือน แล้วแสดงผลออกมาทางหน้าจอ

#include <stdio.h>
#include <string.h>

int main() {
    // 1. ประกาศตัวแปรสำหรับเก็บข้อมูล
    char fullName[100];
    char nickname[50];
    int age;
    double salary;

    // --- ส่วนรับข้อมูล ---
    // พิมพ์ข้อความแจ้งผู้ใช้ (แสดงผลเป็นภาษาอังกฤษ)
    printf("Enter full name: "); // อ่านว่า: เอ็นเทอร์ ฟูล เนม (แปลว่า: ป้อนชื่อเต็ม)
    fgets(fullName, 100, stdin);
    fullName[strcspn(fullName, "\n")] = 0;

    printf("Enter nickname: ");  // อ่านว่า: เอ็นเทอร์ นิคเนม (แปลว่า: ป้อนชื่อเล่น)
    fgets(nickname, 50, stdin);
    nickname[strcspn(nickname, "\n")] = 0;

    printf("Enter age: ");       // อ่านว่า: เอ็นเทอร์ เอจ (แปลว่า: ป้อนอายุ)
    scanf("%d", &age);

    printf("Enter salary: ");    // อ่านว่า: เอ็นเทอร์ ซาลารี่ (แปลว่า: ป้อนเงินเดือน)
    scanf("%lf", &salary);

    // --- ส่วนแสดงผลข้อมูล ---
    // พิมพ์หัวข้อ (แสดงผลเป็นภาษาอังกฤษ)
    printf("\n--- Recorded Information ---\n"); // อ่านว่า: เรคคอร์ดเด็ด อินฟอร์เมชัน (แปลว่า: ข้อมูลที่บันทึก)
    
    // พิมพ์ข้อมูลแต่ละรายการ (แสดงผลเป็นภาษาอังกฤษ)
    printf("Full Name: %s\n", fullName); // Full Name: ฟูล เนม (ชื่อเต็ม)
    printf("Nickname: %s\n", nickname);  // Nickname: นิคเนม (ชื่อเล่น)
    printf("Age: %d years\n", age);      // Age: เอจ (อายุ), years: เยียร์ส (ปี)
    printf("Salary: %.2f\n", salary);    // Salary: ซาลารี่ (เงินเดือน)

    return 0;
}