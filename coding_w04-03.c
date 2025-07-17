#include <stdio.h>

int main() {
    char firstInitial = 'C';
    int age = 19;
    float weight = 110.0f;
    char gender = 'boy';

    printf("ตัวอักษรตัวแรกของชื่อ: %c\n", firstInitial);
    printf("อายุ: %d ปี\n", age);
    printf("น้ำหนัก: %.1f กก.\n", weight);
    printf("เพศ: %c\n", gender);

    return 0;
}