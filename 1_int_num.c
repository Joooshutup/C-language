//學習(float)用法
#include <stdio.h>

int main(){
	int a, b, c;
	printf("Please enter the first integer: ");
	scanf("%d", &a);
	printf("Please enter the second integer: ");
	scanf("%d", &b);
	printf("Please enter the third integer: ");
	scanf("%d", &c);
	
	printf("You enteder: %d, %d, %d. Sum is %d\n", a, b, c, a+b+c);
	printf("You enteder: %d, %d, %d. Difference is %d\n", a, b, c, a-b-c);
	printf("You enteder: %d, %d, %d. Product is %d\n", a, b, c, a*b*c);
	printf("You enteder: %d, %d, %d. Quotient is %f\n", a, b, c, (float)a/b/c);
	
	return 0;
}
//輸出結果
/*
Please enter the first integer: 56
Please enter the second integer: 64
Please enter the third integer: 34
You enteder: 56, 64, 34. Sum is 154
You enteder: 56, 64, 34. Difference is -42
You enteder: 56, 64, 34. Product is 121856
You enteder: 56, 64, 34. Quotient is 0.025735
*/