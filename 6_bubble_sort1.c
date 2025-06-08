// Bubble Sort 氣泡演算法 小到大
#include <stdio.h>

int main(void){
	int a[5];
	
	printf("請輸入五個整數\n");
	for (int i=0; i<5; i++){
		printf("第%d個整數: ", i+1);
		scanf("%d", &a[i]);
	}
	
	for (int pass = 0; pass<4; pass++){
		for (int i=0; i<4-pass; i++){
			if (a[i] > a[i+1]){
				int tmp = a[i];
				a[i] = a[i+1];
				a[i+1] = tmp;
			}
		}
	}
	
	printf("排序結果：");
	for (int i=0; i<5; i++) printf("%d ", a[i]);
	printf("\n");
	
	return 0;
}
//輸出結果
/*
請輸入五個整數
第1個整數: 45
第2個整數: 3
第3個整數: 87644566
第4個整數: 5555
第5個整數: 54333
排序結果：3 45 5555 54333 87644566 
*/