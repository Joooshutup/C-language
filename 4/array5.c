// 陣列5 找最大值
#include <stdio.h>

int main() {
    int numbers[5];
    int max;

    printf("請輸入五個整數：\n");

    // 讀入整數並存進陣列
    for (int i = 0; i < 5; i++) {
        printf("第%d個整數：", i + 1);
        scanf("%d", &numbers[i]);
    }

    // 假設第一個數字是最大值
    max = numbers[0];

    // 找出最大值
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // 輸出最大值
    printf("最大值為 %d\n", max);

    return 0;
}
//輸出結果
/*
第1個整數：12  
第2個整數：20  
第3個整數：63  
第4個整數：55  
第5個整數：44  
最大值為 63
*/
