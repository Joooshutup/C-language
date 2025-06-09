//用while回圈來做成積分等
/*
while(1) 是一種建立無限迴圈（infinite loop） 的方式。
這裡的 1 代表 條件永遠為真 (true)，讓迴圈可以持續執行，
直到程式內部使用 break; 來結束。
*/
#include <stdio.h>

int main() {
    int grade;  // 宣告變數 grade

    while (1) {  // 無限迴圈，直到輸入正確的成績後才會結束
        printf("請輸入成績(0-100): ");  
        scanf("%d", &grade);  // 讀取使用者輸入的成績

        if (grade < 0 || grade > 100) {  
            printf("輸入有誤，請重新輸入\n");  
            continue;  // 繼續迴圈，讓使用者重新輸入
        } 
        else {  
            // 判斷成績等級
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
                printf("等級: F\n");  // 低於 60 分為 F
            }
            break;  // 成績輸入正確後，結束迴圈
        }
    }
    return 0;
}
