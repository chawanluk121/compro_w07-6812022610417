#include<stdio.h>

int main(){
    int x,y;
    printf("Enter x:"); 
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    if (x>y){
        printf("x มีค่ามากกว่า y");
    }
    else if (x<y){
        printf("x มีค่าน้อยกว่า y");
    }
    else if (x=y){
        printf("x มีค่าเท่ากับ y");
    }
    return 0;
}
//#include<stdio.h>

//int main(){
//    int x,y;      //กำหนดตัวแปร x และ y เป็นจำนวนเต็ม
//    printf("Enter x:");   //ถามค่า x
//   scanf("%d",&x);   //รับค่า x
//   printf("Enter y:");  //ถามค่า  y
//   scanf("%d",&y);    //รับค่า y
//  if (x>y){       //เปรียบเทียบค่าเมื่อ x มากกว่า y
//      printf("x มีค่ามากกว่า y");     //แสดงข้อความ x มีค่ามากกว่า y
//  }
// else if (x<y){   //เปรียบเทียบค่าเมื่อ x น้อยกว่า y
//      printf("x มีค่าน้อยกว่า y");     //แสดงข้อความ x มีค่าน้อยกว่า y
//  }
//  else if (x=y){     //เปรียบเทียบค่าเมื่อ x เท่ากับ y
//      printf("x มีค่าเท่ากับ y");    //แสดงข้อความ x เท่ากับ y
//  }
//  return 0;   //จบการทำงาน
//}