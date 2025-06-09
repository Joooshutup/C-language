// 比大小
#include <stdio.h>

int main() {
    int max, min, value;

    // 讀取第一個數字並初始化 max 和 min
    printf("請輸入第1個數字: ");
    scanf("%d", &value);
    max = min = value; // 第一個輸入的數字設為初始最大、最小值

    // 讀取剩餘的 3 個數字
    for (int i = 2; i <= 4; i++) {
        printf("請輸入第%d個數字: ", i);
        scanf("%d", &value);

        if (value > max) max = value; // 更新最大值
        if (value < min) min = value; // 更新最小值
    }

    // 輸出結果
    printf("最大值 = %d\n", max);
    printf("最小值 = %d\n", min);

    return 0;
}

//輸出結果
/*
請輸入第1個數字: 10 
請輸入第2個數字: 20
請輸入第3個數字: 99
請輸入第4個數字: 64
最大值 = 99
最小值 = 10
*/
