// Switch case default的應用
/*
switch (變數) {
    case 值1:
        // 當變數 == 值1 時執行
        break;
    case 值2:
        // 當變數 == 值2 時執行
        break;
    case 值3:
        // 當變數 == 值3 時執行
        break;
    default:
        // 當變數不符合上面任何 case 時執行
        break;
}
*/

// 星期幾？
#include <stdio.h>

int main() {
    int day;

    // 提示使用者輸入 1~7 的數字
    printf("請輸入一個數字 (1-7) 來選擇星期幾: ");
    scanf("%d", &day);

    // 使用 switch 來判斷輸入的數字
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
        default:
            printf("錯誤: 請輸入有效的數字 (1-7)!\n");
            break;
    }

    return 0;
}
