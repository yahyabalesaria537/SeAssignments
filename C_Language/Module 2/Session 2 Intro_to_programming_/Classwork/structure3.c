#include<stdio.h>
struct Product{
	int pid;
	float price;
	char pname[20];
};
main(){
	struct Product p[5];
	int i;
	for(i=0;i<5;i++){
		printf("\n Enter pid pname and price of product=%d",i+1);
		scanf("%d %s %f",&p[i].pid,p[i].pname,&p[i].price);
	}
	for(i=0;i<5;i++){
		printf("\n pid=%d \t pname=%s \t price=%f",p[i].pid,p[i].pname,p[i].price);
	}
}
