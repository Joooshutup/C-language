//每個陣列*2
#include <stdio.h>

int main() {
	int x[5];
	int y[5];
	
	x[0] = 2;
	x[1] = 4;
	x[2] = 6;
	x[3] = 8;
	x[4] = 10;
	
	for (int i=0; i<5; i++){
		y[i] = x[i] * 3;
	}
	
	for (int i=0; i<5; i++){
		printf("x[%d]=%d, y[%d]=%d\n", i, x[i], i, y[i]);
	}
	return 0;
}

//輸出結果
/*
x[0]=2, y[0]=6
x[1]=4, y[1]=12
x[2]=6, y[2]=18
x[3]=8, y[3]=24
x[4]=10, y[4]=30
*/