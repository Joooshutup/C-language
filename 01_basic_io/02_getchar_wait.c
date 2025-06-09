/*
getchar()的應用，按下任意一個鍵可以停止程式碼，
通常用來防止程式在 命令提示字元（cmd）或終端機（terminal） 直接閃退。
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("這是一個警告示例。\n");
	printf("按下任意鍵繼續。\n");
	
	getchar();
	
	printf("感謝您的按鍵，程式結束。\n");
	return 0;
}
