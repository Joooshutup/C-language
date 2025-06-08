//Pointer計算加減乘除法
#include <stdio.h>

int main(){

	int a, b;
	printf("請輸入第一個整數： ");
	scanf("%d", &a);
	printf("請輸入第二個整數： ");
	scanf("%d", &b);
	
	int *ptrA = &a;
	int *ptrB = &b;
	
	printf("加法a+b: %d\n", *ptrA + *ptrB);
	printf("減法a-b: %d\n", *ptrA - *ptrB);
	printf("乘法a*b: %d\n", *ptrA * *ptrB);
	if (*ptrB != 0){
		printf("除法a/b: %.2f\n", (float)*ptrA / (float)*ptrB);
	} else {
		printf("除法a/b cannot devided by 0\n");
	}
	
	return 0;
}
//輸出結果
/*
請輸入第一個整數： 5
請輸入第二個整數： 677
加法a+b: 682
減法a-b: -672
乘法a*b: 3385
除法a/b: 0.01
*/