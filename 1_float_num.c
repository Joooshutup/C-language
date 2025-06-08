//直接改全部float
#include <stdio.h>

int main(){
	float a, b, c;
	printf("Please enter the first floating num: ");
	scanf("%f", &a);
	printf("Please enter the second floating num: ");
	scanf("%f", &b);
	printf("Please enter the third floating num: ");
	scanf("%f", &c);
	
	printf("You enteder: %.2f, %.2f, %.2f. Sum is %.2f\n", a, b, c, a+b+c);
	printf("You enteder: %.2f, %.2f, %.2f. Difference is %.2f\n", a, b, c, a-b-c);
	printf("You enteder: %.2f, %.2f, %.2f. Product is %.2f\n", a, b, c, a*b*c);
	printf("You enteder: %.2f, %.2f, %.2f. Quotient is %.2f\n", a, b, c, a/b/c);
	
	return 0;
}
//輸出結果
/*
Please enter the first floating num: 67
Please enter the second floating num: 89
Please enter the third floating num: 4.08
You enteder: 67.00, 89.00, 4.08. Sum is 160.08
You enteder: 67.00, 89.00, 4.08. Difference is -26.08
You enteder: 67.00, 89.00, 4.08. Product is 24329.04
You enteder: 67.00, 89.00, 4.08. Quotient is 0.18
*/