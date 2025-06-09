//`long long` 型別能夠存儲超大數字。
/*
long long 型別通常是 **64 位元**，它的範圍如下：
有號 (signed) long long：
    最小值：`9223372036854775808`
    最大值：`9223372036854775807`
*/
#include <stdio.h>

int main() {
    long long largeNumber = 9223372036854775807LL;  // 加上 LL 來確保它是 long long
    printf("The large number is: %lld\n", largeNumber);  // 印出 long long 數值
    return 0;
}
