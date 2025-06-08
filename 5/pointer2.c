// Pointer與記憶體位址操作 2
#include <stdio.h>

int main(void){
	int num = 100; //整數變數
	int *ptr = NULL; //整數pointer 先設為NULL
	
	ptr = &num; // 用「＆」拿到num的位址，存進去ptr
															//void *指向不確定類型的指標
	printf("num 的位址是 %p\n", (void *)&num);
	printf("ptr 包含位址 %p\n", (void *)&ptr);
	printf("num 的值為 %d\n", num);
	printf("ptr 指向值 %d\n", *ptr);
	
	return 0;
}
//輸出結果
/*
num 的位址是 0x7ffe6826a67c
ptr 包含位址 0x7ffe6826a680
num 的值為 100
ptr 指向值 100
*/
