#include<stdio.h>
// global varaible
int n=100;

// function with formal parameters
void show(int a,int b){
	// local variable
	int sum;
	sum=a+b;
	
	printf("\n global variable =%d",n);
	printf("\n formal parameters =%d & %d",a,b);
	printf("\n local varaible(sum) =%d",sum);
}
main(){
	show(10,20);
	return 0;
}
