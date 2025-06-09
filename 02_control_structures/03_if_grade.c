// 用if, else if和else判斷成績區間
#include <stdio.h>

int main() {
    int grade;  // 宣告變數 grade 來儲存使用者輸入的成績

    printf("請輸入成績: ");  
    scanf("%d", &grade);  // 讀取使用者輸入的數字

    // 檢查輸入是否超出合理範圍 (0~100)
    if (grade < 0 || grade > 100) {
        printf("輸入有誤\n");
    }
    else {
        if (grade >= 90) {
            printf("等級: A\n");
        } 
        else if (grade >= 80) {
            printf("等級: B\n");
        } 
        else if (grade >= 70) {
            printf("等級: C\n");
        } 
        else if (grade >= 60) {
            printf("等級: D\n");
        } 
        else {
            printf("等級: F\n");
        }
    }
    return 0;
}
