#include<stdio.h>

int main(){
    int level;
    printf("Enter level (1-4):");
    scanf("%d",&level);

    if(level<=0){
        printf("The level below 1 is not allowed");
        return 0;
    }else if (level>4){
       printf("The level above 4 is not allowed");
    }else 
    switch(level){
        case 1:printf("Beginner\n");break;
        case 2:printf("Intermediate\n");break;
        case 3:printf("Advanced\n"); break;
        case 4:printf("Expert\n");  break;
        default:printf("Invalid level\n");
     }
   
    return 0; //จบการทำงาน
}
// วิเคราะห์โปรแกรม
// level 1 ไม่มี break โปรแกรมจะไหลต่อจนถึง level 3 เพราะ level 3 มี break
// level 2 ไม่มี break โปรแกรมจะไหลต่อจนถึง level 3 เพราะ level 3 มี break
// level 3 แสดงผลลัพธ์ Advanced
// level 4 แสดงผลลัพธ์ Expert
// level 0 ไม่เข้าเงื่อนใขแสดงผลลัพธ์ Invalid level 
// level 10 ไม่เข้าเงื่อนไขแสดงผลลัพธ์ Invalid level

//สรุปและอภิปราย
// ไม่มี break จะเกิดอะไรขึ้น โปรแกรมจะไหลต่อจนจบหรือเจอ break 
// อาจเกิดผลลัพธ์เกินคาดถ้าลืม break
// default คืออะไร คือคำสั่งที่จะทำงานเมื่อไม่ตรงกับ case ใดเลย 
// level -4 แสดงผลลัพธ์ The level below 1 is not allowed
// level 0 แสดงผลลัพธ์  The level below 1 is not allowed
// level 1 แสดงผลลัพธ์  Beginner
// level 2 แสดงผลลัพธ์  Intermediate
// level 3 แสดงผลลัพธ์  Advanced
// level 4 แสดงผลลัพธ์  Expert
// level 100 แสดงผลลัพธ์ The level above 4 is not allowed