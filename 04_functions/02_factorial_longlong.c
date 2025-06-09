// 來個long long階乘改良版
#include <stdio.h>

// 使用 long long 來處理大數
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int number;

    printf("Please input a number A >> ");
    scanf("%d", &number);

    // 檢查是否為負數
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("A! = %lld\n", factorial(number));  // 使用 %lld 印出 long long 型數值
    }

    return 0;
}
