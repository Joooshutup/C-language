// for loop計算99乘法表
#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {  // 外層迴圈：控制 "被乘數" (1~9)
        for (int j = 1; j <= 9; j++) {  // 內層迴圈：控制 "乘數" (1~9)
            printf("%d * %d = %2d  ", i, j, i * j); // 印出乘法結果，%2d 讓結果對齊
        }
        printf("\n"); // 每完成一行，換行
    }
    return 0;
}
