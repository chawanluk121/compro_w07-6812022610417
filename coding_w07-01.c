#include<stdio.h>

int main(){
    float score, finalScore;             //กำหนดตัวแปรให้อยู่ในรูปทศนิยม
    //รับคะแนนจากผู้ใช้
    printf("Enter your midterm score:"); //ใส่คะแนนสอบ
    scanf("%f",&score);                  //รับค่าตัวแปร score
   
    if (score>= 50){                      //ถ้าคะแนนมากกว่าหรือเท่ากับ 50 คะแนน
        finalScore = score + (score*0.05);//คำนวณคะแนนที่เพิ่มขึ้น 5% คิดเป็นคะแนนรวมสุดท้าย
        printf("Final score:%.2f\n",finalScore);//แสดงผลคะแนนหลังจากเพิ่มคะแนน
    } else {                               //เมื่อคะแนนไม่ถึง 50 คะแนน
        printf("Final score:%.2f\n",score);//แสดงคะแนนที่ไม่ได้เพิ่มคะแนน 5%
    }
    printf("End of evaluation\n");//แสดงให้เห็นว่าจบโปรแกรมการทำงาน
    return 0;//จบโปรแกรม
}