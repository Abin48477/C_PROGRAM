#include<stdio.h>

struct Students{
	char name[50];
	int rollno;
	float marks;
};
int main(){

struct Students s1 = {"Abin",1,89.57};

printf("Name: %s \nRollno.: %d \nMarks: %.2f",s1.name,s1.rollno,s1.marks);

return 0;
}
