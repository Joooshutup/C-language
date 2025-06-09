// 星期幾的do__while版本，可以重複輸入直到輸入正確數字為止
#include <stdio.h>

int main() {
    int day;

    do {
        printf("請輸入一個數字 (1-7) 來選擇星期幾: ");
        scanf("%d", &day);

        // 檢查輸入是否有效範圍
        if (day < 1 || day > 7) {
            printf("錯誤: 請輸入有效的數字 (1-7)!\n");
        }
    } while (day < 1 || day > 7);  // 當輸入不在 1~7 範圍內時重複

    switch (day) {
        case 1:
            printf("星期一\n");
            break;
        case 2:
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
        case 6:
            printf("星期六\n");
            break;
        case 7:
            printf("星期日\n");
            break;
    }

    return 0;
}
