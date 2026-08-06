#include<stdio.h>
main(){
	int likes,comments,shares;
	printf("enter likes: ");
	scanf("%d",&likes);
	printf("enter comments: ");
	scanf("%d",&comments);
	printf("enter shares: ");
	scanf("%d",&shares);
	if(likes>=1000 || (comments>200 && shares>=50)){
		printf("\n post is trending on instagram.");
	}else{
		printf("\n post is not trending.");
	}
}
