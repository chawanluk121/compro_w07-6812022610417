#include <stdio.h>

int main(void) {
    int level;//ตัวแปรเก็บระดับสมาชิก
    printf("Enter membership level (1-4): ");// แสดงข้อความให้ผู้ใช้กรอกระดับสมาชิก
    if (scanf("%d", &level) != 1) {
        printf("Invalid membership level\n");
        return 0;// จบการทำงาน
    }

    switch (level) {
        case 1:
            printf("Silver Member: 5%% discount\n");        // แสดงข้อความสิทธิประโยชน์ของสมาชิกตามระดับ
            break;
        case 2:
            printf("Gold Member: 10%% discount + Reward points\n");
            break;
        case 3:
            printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            printf("Diamond Member: 15%% discount + Reward points + Birthday gift + VIP events\n");
            break;
        default:
            printf("Invalid membership level\n");// กรณีที่กรอกเลขนอกเหนือจาก1-4จะแสดงผลลัพธ์ Invalid membership level
    }
    return 0; // จบการทำงาน
}


//การวิเคราะห์เปรียบเทียบ if vs switch 
//if-else if 
//ข้อดี ยืดหยุ่นสูง ใช้ได้ทั้งตัวเลข หรือเงื่อนไขซับซ้อน ไม่จำกัดว่าเป็นตัวเลขหรือตัวอักษร
//ข้อเสีย ถ้ามีหลายเงื่อนไขโค้ดยาวอ่านยาก
//switch-case 
//ข้อดี โค้ดกระชับ อ่านง่าย การเพิ่มหรือแก้ไขทำได้ง่ายเช่นการเพิ่ม case
//ข้อเสีย ไม่ยืดหยุ่น ใช้ได้กับ int,cha แต่ใช้กับ float,double ไม่ได้ 


//อภิปราย 
//โปรแกรมนี้ควรใช้ switch-case 
//เพราะ switch-case เหมาะกับกรณีที่ต้องตรวจสอบค่าคงที่ เช่นตัวเลข 1,2,3,4
//โค้ดสั้น กระชับ อ่านง่าย เหมาะกับการตรวจสอบค่าหลายกรณี
//ถ้าเพิ่ม level ใหม่ในอนาคตก็เพิ่ม case ได้เลย