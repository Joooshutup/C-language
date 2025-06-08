//計算bmi 用pow()
#include <stdio.h>
#include <math.h>

int main(){
	float weight, height, bmi;
	for (int i=1; i<=18; i++){
		printf("*");
	}
	printf("\n");
	
	printf("BMI計算器\n");
	for (int i=1; i<=18; i++){
		printf("*");
	}
	printf("\n");
	
	printf("請輸入你的體重（kg）");
	scanf("%f", &weight);
	printf("請輸入身高（m）");
	scanf("%f", &height);
	
	bmi = weight / pow(height, 2);
	printf("你的bmi是： %.2f\n", bmi);
	
	if (bmi < 18.5){
		printf("過輕");
	} else if(bmi < 24){
		printf("適中");
	} else {
		printf("過重了肥豬");
	}
	
}
//輸出結果
/*
******************
BMI計算器
******************
請輸入��的體重（kg）65
請輸入身高（m）1.78
你的bmi是： 20.52
適中
*/