//擴大版struct
#include <string.h>
#include <stdio.h>

struct Student {
	char name[50];
	int age;
	char id[20];
	float grade;
};

int main(){
	struct Student s;
	
	printf("Enter student name: ");
	scanf("%s", &s.name);
	printf("Enter student age: ");
	scanf("%d", &s.age);
	printf("Enter student id(can include letters): ");
	scanf("%s", &s.id);
	printf("Enter student grade: ");
	scanf("%f", &s.grade);
	
	if (s.grade >= 60) {
		printf("%s has passed. \n", s.name);
	} else {
		printf("%s has failed. \n", s.name);
	}
	
	printf("Student Information\n");
	printf("Name: %s\n", s.name);
	printf("Age: %d\n", s.age);
	printf("ID: %s\n", s.id);
	printf("Grade: %.2f\n", s.grade);
	
	return 0;
}
//輸出結果
/*
Enter student name: Eiki
Enter student age: 22
Enter student id(can include letters): 412777194
Enter student grade: 90
Eiki has passed. 
Student Information
Name: Eiki
Age: 22
ID: 412777194
Grade: 90.00
*/
