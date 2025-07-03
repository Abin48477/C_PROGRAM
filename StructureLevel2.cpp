#include<stdio.h>

struct Teachers{
	char name[50];
	int id;
	long long phoneno;
};
int main(){

struct Teachers t1 = {"Nabin_Humagin",456,9761715610};
struct Teachers t2 = {"Abashak_Dhakal",454,9876893736};
struct Teachers t3 = {"Abin_Ghimire",453,9845688983};

printf("Name: %s \nID: %d \nPhone no.: %lld",t1.name,t1.id,t1.phoneno );
printf("\nName: %s\n ID: %d \nPhone no.: %lld",t2.name,t2.id,t2.phoneno );
printf("\nName:%s \nID: %d \nPhone no.: %lld",t2.name,t3.id,t3.phoneno);

 return 0;
}
