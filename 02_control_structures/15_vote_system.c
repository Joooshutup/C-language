//// 投票系統，綜合使用 while + switch-case
#include <stdio.h>

int main() {
    int i = 0;
    int a = 0, b = 0, c = 0, d = 0;

    while (i < 5) {
        int x;
        printf("請投票 (1)Ben (2)Amy (3)Josh : ");
        scanf("%d", &x);

        switch (x) {
            case 1: a++; break;
            case 2: b++; break;
            case 3: c++; break;
            default: d++; break;
        }

        i++;
        printf("第%d次投票，Ben%d票、Amy%d票、Josh%d票、廢票%d票\n", i, a, b, c, d);
    }

    if (a > b && a > c) {
        printf("Ben當選\n");
    } else if (b > a && b > c) {
        printf("Amy當選\n");
    } else if (c > a && c > b) {
        printf("Josh當選\n");
    } else if (a == b && a > c) {
        printf("Ben和Amy同票數\n");
    } else if (b == c && b > a) {
        printf("Amy和Josh同票數\n");
    } else if (a == c && a > b) {
        printf("Ben和Josh同票數\n");
    } else {
        printf("平手\n");
    }

    return 0;
}
