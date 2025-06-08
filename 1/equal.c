//看看有沒有相等
#include <stdio.h>

int main(void) {
    int a, b;

    printf("請輸入兩個整數：");
    scanf("%d %d", &a, &b);

    // 判斷相等或不相等
    if (a == b) {
        printf("%d 等於 %d\n", a, b);
    } else {
        printf("%d 不等於 %d\n", a, b);
    }

    // 判斷小於 / 小於等於
    if (a < b) {
        printf("%d 小於 %d\n", a, b);
        printf("%d 小於或等於 %d\n", a, b);
    } else if (a == b) {
        printf("%d 小於或等於 %d\n", a, b);
        printf("%d 大於或等於 %d\n", a, b);
    } else {  // a > b
        printf("%d 大於 %d\n", a, b);
        printf("%d 大於或等於 %d\n", a, b);
    }

    return 0;
}

//輸出結果
/*
請輸入兩個整數：12 18 
12 不等於 18
12 小於 18
12 小於或等於 18
*/
