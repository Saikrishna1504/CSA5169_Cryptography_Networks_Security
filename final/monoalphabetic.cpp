#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 26
int main(){
	char message[100];
	char key[size + 1]="ZYXWVUTSRQPONMLKJIHGFEDCBA";
	printf("enter message to encrypt");
	fgets(message,sizeof(message),stdin);
	printf("original message %s\n",message);
	int i;
	for(i=0;message[i]!='\0';i++){
		if(isalpha(message[i])){
			char base = isupper(message[i]) ? 'A' : 'a';
			message[i] = key[message[i] - base];
		}
	}
	printf("encrypted message is %s",message);
	return 0;
}