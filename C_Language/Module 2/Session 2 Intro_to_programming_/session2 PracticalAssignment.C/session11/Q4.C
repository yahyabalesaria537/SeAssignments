#include<stdio.h>
void increementfollowers(int *followers,int n){
	int i;
	
	for(i=0;i<n;i++){
		*(followers + i)= *(followers + i)+ 100;
	}
}
main(){
	int followers[5]={500,800,1200,3000,6666};
	int i;
	increementfollowers(followers,5);
	printf("\n updated folllowers count: ");
	for(i=0;i<5;i++){
		printf("\n %d",followers[i]);
	}
}
