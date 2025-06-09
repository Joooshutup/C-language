//while迴圈的練習
#include <stdio.h>

int main() {
    int num, sum = 0;  // 初始化變數，sum 用來存總和

    while (1) {  // 無限迴圈，直到輸入 0 才結束
        printf("請輸入一個數值 (輸入 0 結束): ");
        scanf("%d", &num);

        if (num == 0)  // 如果輸入 0，結束迴圈
            break;

        sum += num;  // 將輸入的數字累加到總和中
    }

    printf("數值總和為: %d\n", sum);  // 輸出結果
    return 0;
}
