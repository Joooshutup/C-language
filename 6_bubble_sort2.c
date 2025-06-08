// Bubble sort 大到小
#include <stdio.h>

int main(void){
    int a[5];

    printf("請輸入五個整數\n");
    for (int i = 0; i < 5; i++){
        printf("第%d個整數: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Bubble Sort：由大排到小
    for (int pass = 0; pass < 4; pass++){
        for (int i = 0; i < 4 - pass; i++){
            if (a[i] < a[i + 1]){  // 判斷改成 <，大的往前排
                int tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
            }
        }
    }

    printf("排序結果（大排到小）：");
    for (int i = 0; i < 5; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}
// 輸出結果
/*
第1個整數: 12  
第2個整數: 55  
第3個整數: 7  
第4個整數: 88  
第5個整數: 20
排序結果（大排到小）：88 55 20 12 7
*/