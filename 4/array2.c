//定義一個陣列，用大括號儲存多個值
#include <stdio.h>

int main(){
    int a, b, c;
    int i[3] = {1, 2, 3};
    
    a = i[0];
    b = i[1];
    c = i[2];
    
    printf("元素1: %d\n", a);
    printf("元素2: %d\n", b);
    printf("元素3: %d\n", c);
    
    return 0;
}
//輸出結果
/*
元素1: 1
元素2: 2
元素3: 3
*/
