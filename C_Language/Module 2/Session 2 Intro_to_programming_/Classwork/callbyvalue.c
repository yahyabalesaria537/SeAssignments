#include<stdio.h>
// call by value
void swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\n in function a=%d b=%d",a,b);
}
main(){
	int a=10,b=20;
	swap(a,b);
	printf("\n a=%d b=%d",a,b);
}
