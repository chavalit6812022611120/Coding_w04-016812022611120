#include <stdio.h>

void countCall() {
    static int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}
//Static Variabl ค่า Counter จะ เพิ่มขึ้นเรื่อยๆ (1, 2) เพราะ static int counter = 0; จะถูกสร้างและเริ่มที่ 0 แค่ครั้งแรกที่โปรแกรมทำงาน 
//พอเรียกชันอีกรอบ ค่าของ counter ก็จะยังคงอยู่ ไม่ได้เริ่มใหม่จาก 0 ครับ
//สรุป static: เหมือนของที่เก็บไว้ใช้ซ้ำได้ พอฟังก์ชันทำงานเสร็จ มันไม่หายไปไหน พอเรียกใหม่ มันก็จะจำค่าเดิมที่เคยนับไว้ แล้วนับต่อจากตรงนั้นเลย