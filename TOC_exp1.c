#include<stdio.h>
#include<string.h>
#define max 20
int main(){
	int trans_table[4][2]={{1,3},{1,2},{1,2},{3,3}};
	int final_state=2,i;
	int pr_state=0;
	int nxt_state=0;
	int invalid=0;
	char input_string[max];
	printf("enter a string:");
	scanf("%s",input_string);
	int l=strlen(input_string);
	for(i=0;i<l;i++)
	{
		if(input_string[i]=='a')
		nxt_state=trans_table[pr_state][0];
		else
		invalid=l;
		pr_state=nxt_state;
	}
	if(invalid==l)
	{
		printf("invalid input");
	}
	else if(pr_state==final_state)
	printf("accept\n");
	else
	printf("Don't Accept\n");
}