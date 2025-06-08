//陣列做加總
#include <stdio.h>

int main(){
	int num[5];
	int sum = 0;
	
	for (int i=0; i<5; i++){
		printf("第%d個整數： ", i+1);
		scanf("%d", &num[i]);
		sum += num[i];
	}
	
	printf("總和為：%d", sum);
	
	return 0;
	
}

//輸出結果
/*
第1個整數： 55
第2個整數： 66
第3個整數： 242
第4個整數： 456689
第5個整數： 1
總和為：457053
*/
