#include <stdio.h>

int main() {
    int age, vip;//ตัวแปรเก็บอายุและระดับ VIP
    double amount;//ตัวแปรเก็บจำนวนเงินซื้อสินค้า
    int discount = 0;//ตัวแปรเก็บส่วนลด

    
    printf("Enter age: ");//แสดงข้อความให้ผู้ใช้กรอกอายุ
    scanf("%d", &age);//รับค่าอายุ

    printf("Enter VIP level (1-5): ");//แสดงข้อความให้ผู้ใช้กรอกระดับ VIP
    scanf("%d", &vip);//รับค่า VIP

    printf("Enter purchase amount: ");//แสดงข้อความจำนวนเงินซื้อสินค้า
    scanf("%lf", &amount);//รับยอดซื้อ

   
    if (vip == 5 || amount > 50000) {
        discount = 25;
    } else if (age > 60 || (vip == 3 || vip == 4)) {
        discount = 20;
    } else if ((age >= 30 && age <= 40) && amount > 2000) {
        discount = 15;
    } else if ((age >= 18 && age <= 25) && amount > 1000) {
        discount = 10;
    }

   //แสดงข้อมูลลูกค้า
    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip, amount);

    if (discount > 0) {
        printf("Discount received: %d%%\n", discount);
    } else {
        printf("No discount applied\n");
    }

    printf("\nThank you for shopping with us!\n");

    return 0; // จบการทำงาน
}