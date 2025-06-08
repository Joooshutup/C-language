//Pointer, 陣列與記憶體位址操作 3
#include <stdio.h>

int main(void){
	int a[3] = {10, 20, 30};
	
	printf("a      = %p\n", (void*)a);
	printf("&a[0]  = %p\n", (void*)&a[0]);
	printf("&a     = %p\n", (void*)&a);
	puts("-------------");
	printf("sizeof a    = %zu\n", sizeof a);
	printf("sizeof a[0] = %zu\n", sizeof a[0]);
	printf("sizeof &a   = %zu\n", sizeof &a);
	
	return 0;
}
//輸出結果
/*
a      = 0x7fff335429ac
&a[0]  = 0x7fff335429ac
&a     = 0x7fff335429ac
-------------
sizeof a    = 12
sizeof a[0] = 4
sizeof &a   = 8
*/