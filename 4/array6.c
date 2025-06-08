//陣列6 反轉陣列
#include <stdio.h>

int main() {
    int numbers[5];

    printf("請輸入五個整數：\n");

    // 讀入使用者輸入的整數
    for (int i = 0; i < 5; i++) {
        printf("第%d個整數：", i + 1);
        scanf("%d", &numbers[i]);
    }

    // 反向輸出
    printf("反向輸出結果：\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
//輸出結果
/*
第1個整數：99  
第2個整數：55  
第3個整數：88  
第4個整數：77  
第5個整數：11  
11  
77  
88  
55  
99

*/
