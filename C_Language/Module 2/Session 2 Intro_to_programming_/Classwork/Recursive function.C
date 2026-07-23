#include<stdio.h>
void printnum(int n){
	if(n>5) // base condition
	return;
	printf("\n %d",n);
	printnum(n+1); // function khud ko call kar raha hai
}
main(){
	printnum(1);
	return 0;
}
