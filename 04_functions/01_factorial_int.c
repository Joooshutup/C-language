//計算階乘 在這個範例裡，12!是最大極限 13!就超過了
#include <stdio.h>

// 階乘函式 (遞迴)
int factorial(int n) {
    if (n == 1)  // 終止條件
        return 1;
    else
        return n * factorial(n - 1);  // 遞迴計算 n!
}

int main() {
    int number;

    printf("Please input a number A >>");  
    scanf("%d", &number);  // 讀取使用者輸入的數字

    printf("A! = %d", factorial(number));  // 計算並輸出階乘
    return 0;
}
