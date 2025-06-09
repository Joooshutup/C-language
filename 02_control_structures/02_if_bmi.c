// 計算bmi 用if, else if, else
#include <stdio.h>

int main() {
    float weight, height, bmi;  // 定義變數

    printf("請輸入您的體重(公斤):\n");  
    scanf("%f", &weight);

    printf("Please enter the height(公分)\n");
    scanf("%f", &height);

    bmi = weight / ((height/100) * (height/100));

    printf("你的 BMI 是 %.2f\n", bmi);  // 輸出 BMI，保留兩位小數

    if (bmi < 18.5) {
        printf("過輕");
    }
    else if (bmi < 24.9) {
        printf("正常");
    }
    else if (bmi < 29.9) {
        printf("過重");
    }
    else {
        printf("肥胖");
    }

    return 0;
}
