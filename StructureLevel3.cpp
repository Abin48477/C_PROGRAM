//User input Structure
#include<stdio.h>

struct Children{
	char name[50];
	int grade;
	float marks;
};
int main(){
//Declear the struct Children c;

struct Children c;
//User input
printf("Enter the name of Childern:");
scanf("%s", &c.name);
printf("Enter the Class:");
scanf("%d", &c.grade);
printf("Enter the Marks:");
scanf("%f", &c.marks);

//Display the output
printf("\n//.....Childeren Names.....//\n");
printf("\nName:%s\n", c.name);
printf("Class:%d\n", c.grade);
printf("Marks:%f\n", c.marks);
return 0;
}

