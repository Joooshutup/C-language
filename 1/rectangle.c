//計算長方形體積和總表面積
#include <stdio.h>
int main(){
	float length, width, height;
	
	printf("請輸入長方形的長： ");
	scanf("%f", &length);
	printf("請輸入長方形的寬： ");
	scanf("%f", &width);
	printf("請輸入長方形的高： ");
	scanf("%f", &height);
	
	printf("長方形的體積為： %.2f\n", length*width*height);
	printf("長方形的總面積為： %.2f", length*width*2+width*height*2+length*height*2);
	
	return 0;
	
}

//輸出結果
/*
請輸入長方形的長： 12.5
請輸入長方形的寬： 6.3
請輸入長方形的高： 4.78
長方形的體積為： 376.43
長方形的總面積為： 337.23
*/
