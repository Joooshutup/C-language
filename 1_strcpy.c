//string.h 裡面的strcpy
#include <stdio.h>
#include <string.h>

char name[50];
int age;
long id;

int main(){
	strcpy(name, "EIKI");
	age = 20;
	id = 1001;
	
	printf("Name: %s\n", name);
	printf("Age: %d\n", age);
	printf("ID: %ld\n", id);
	
	return 0;
}

//輸出結果
/*
Name: EIKI
Age: 20
ID: 1001
*/