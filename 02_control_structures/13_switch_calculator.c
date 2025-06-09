// 可以輸入想要的運算符去進行計算
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // 輸入運算符號
    printf("請輸入運算符號 (+, -, *, /): ");
    scanf(" %c", &operator);  // 注意 `scanf(" %c", &operator);` 前面有空格，避免讀取換行符號

    // 輸入兩個數字
    printf("請輸入兩個數字: ");
    scanf("%lf %lf", &num1, &num2);

    // 計算結果
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("錯誤: 除數不能為 0。\n");
            }
            break;
        default:
            printf("無效的運算符號。\n");
            break;
    }

    return 0;
}
