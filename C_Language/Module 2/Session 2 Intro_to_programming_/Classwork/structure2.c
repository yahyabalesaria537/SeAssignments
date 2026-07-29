#include<stdio.h>
struct product{
	int pid;
	float price;
	char pname[20];
};
main(){
	struct product p1;
	printf("\n enter product Id, name, price");
	scanf("%d %s %f",&p1.pid,p1.pname,&p1.price);
	printf("\n pid=%d pname =%s price=%f",p1.pid,p1.pname,p1.price);
}
