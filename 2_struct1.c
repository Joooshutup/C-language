//加上struct更方便包裝
#include <stdio.h>
#include <string.h>

struct Info_T{
	char name[50];
	int age;
	long id;
} student;

int main(){
	strcpy(student.name, "EIKI");
	student.age = 20;
	student.id = 1001;
	
	printf("Name: %s\n", student.name);
	printf("Age: %d\n", student.age);
	printf("ID: %ld\n", student.id);
	
	return 0;
}
//輸出結果
/*
Name: EIKI
Age: 20
ID: 1001
*/