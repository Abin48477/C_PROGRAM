#include<stdio.h>

struct Teachers{
	char name[50];
	int id;
	long long phoneno;
	char address[50];
};
int main(){

struct Teachers t[3];//arrays for 5 teachers
	printf("\n//...Teachers Details...//\n");
//for-loop for user input
int i;
for(i = 0;i<3;i++){
	printf("\n//Enter details for Teachers%d //\n",i+1);
	
	printf("Enter Name:");
	
	getchar(); //Clears leftover newline
	fgets(t[i].name,sizeof(t[i].name),stdin);//fgets(struct,size,stdin)//stdin means read from keyboard
	
	printf("Enter ID:");
	scanf("%d", &t[i].id);
	
	printf("Enter PhoneNo.:");
	scanf("%lld",&t[i].phoneno);
	
	
	printf("Enter Address:");
	getchar();//clear newline before next fgets()
	fgets(t[i].address,sizeof(t[i].address),stdin);
	
	printf("\n//...hare krishna to You...//\n ");
}
//Displaying the Teachers Details
	printf("\n//...Teachers Details...//\n");
for(i = 0; i<3; i++){
	printf("Name:%s",t[i].name);
	printf("ID:%d\n",t[i].id);
	printf("PhoneNo:%lld\n",t[i].phoneno);
	printf("Address:%s\n",t[i].address);
}
return 0;
}
/*?? Imagine This:
You're taking answers from your friend.

? scanf() is like:
You say: “Tell me your phone number.”
He replies: “9845000000” — ? good, only 1 word (no space)

But if you say:

“Tell me your address.”
He says: “Gokarna, Kathmandu” — ? scanf() gets confused after space, it only hears "Gokarna"

? So we use fgets()
fgets(t[i].address, sizeof(t[i].address), stdin);
?? Means:

"Dear computer, take the full line of input (even if it has spaces)"

Store it in t[i].address
Maximum letters = sizeof(t[i].address) (here 50)
stdin means “read from keyboard”

?? But why getchar();?
When you use scanf(), it leaves Enter (\n) in memory.
Then fgets() sees that leftover \n and says:

"Oh! You pressed Enter already. I’ll stop here ??"

So we add:

getchar(); // eats the leftover Enter ???
*/
