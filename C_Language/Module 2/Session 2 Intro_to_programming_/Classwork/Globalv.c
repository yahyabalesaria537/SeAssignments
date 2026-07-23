#include<stdio.h>
int a=50;// global variable
void show(){
	printf("\n value =%d",a);
}
main(){
	printf("\n value =%d",a);
	show();
	return 0;
}
