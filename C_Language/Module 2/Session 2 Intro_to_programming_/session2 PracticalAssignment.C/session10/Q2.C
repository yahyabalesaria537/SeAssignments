#include<stdio.h>
#include<string.h>

main(){
	char username1[50];
	char username2[50];
	
	printf("Enter first username: ");
	scanf("%49s",username1);
	printf("Enter second username: ");
	scanf("%49s",username2);
	
	if(strcmp(username1,username2)==0){
		printf("both username are same.\n");
	}
	else{
		printf("both username are different.\n");
	}
}
