// Pointer 導向計算
#include <stdio.h>
int main(void){
	int num1 = 5;
	int num2;
	int *p = NULL;
	
	p = &num1;
	
	num2 = *p + 2;
	num2 += *p;
	*p = num2;
	(*p)++;
	
	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);
	
	return 0;
}
//輸出結果
/*
num1: 13
num2: 12
*/
