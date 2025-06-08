// Pointer 做簡單加法計算
#include <stdio.h>
int main(void){
	int a = 15;
	int b = 25;
	int sum;
	int *ptrA = &a;
	int *ptrB = &b;
	
	ptrA = &a;
	ptrB = &b;
	
	*ptrA += 10;
	*ptrB -= 5;
	
	sum = *ptrA + *ptrB;
	
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("sum: %d\n", sum);
	
	return 0;
}

// 輸出結果
/*
a: 25
b: 20
sum: 45
*/
