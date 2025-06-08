//Pointer與記憶體位址操作 1
#include <stdio.h>

int main(void) {
    int a = 2;
    int *ptr;
    ptr = &a;         // ptr 儲存 a 的位址
    
    printf("%d\n", a);        // 打印 a 的值
    printf("%p\n", (void*)ptr);  // 打印 ptr 指向的位址
    printf("%d\n", *ptr);     // 打印 ptr 指向的值（即 a 的值）
    
    return 0;
}
//輸出結果
/*
2
0x7ffe61bf6e1c
2
*/
