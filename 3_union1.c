//學會union
#include <stdio.h>
#include <string.h>

union number {
	int x;
	double y;
} num;

int main(){
	num.x = 10;
	printf("num.x: %d\n", num.x);
	num.y = 5.5;
	printf("num.y: %f\n", num.y);
	
	printf("num.x (after setting y): %d\n", num.x);
	
	return 0;
}

//輸出結果
/*
num.x: 10
num.y: 5.500000
num.x (after setting y): 0
*/