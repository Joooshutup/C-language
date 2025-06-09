// 這次改成，如果輸入無效的運算符號，就要重新輸入
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    int valid = 0;

    // 重複直到輸入有效的運算符號
    do {
        printf("請輸入運算符號 (+, -, *, /): ");
        scanf(" %c", &operator);

        // 判斷是否為有效的運算符號
        if (operator == '+' || operator == '-' || operator == '*' || operator == '/') {
            valid = 1;
        } else {
            printf("無效的運算符號，請重新輸入。\n");
        }
    } while (!valid); //當valid等於1才算是成功

    printf("請輸入兩個數字: ");
    scanf("%lf %lf", &num1, &num2);

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
    }

    return 0;
}
