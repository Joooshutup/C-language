// Array陣列
#include <stdio.h>

int main(){
	int num[5];
	
	for (int i=0; i<5; i++){
		printf("第%d個整數： ", i+1);
		scanf("%d", &num[i]);
	}
	for (int i=0; i<5; i++){
		printf("%d\n", num[i]);
	}
	
	return 0;
	
}

//輸出結果
/*
第1個整數： 50
第2個整數： 30
第3個整數： 100
第4個整數： 7775
第5個整數： 3993838
50
30
100
7775
3993838
*/
