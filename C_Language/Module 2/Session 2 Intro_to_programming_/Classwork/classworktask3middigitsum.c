#include<stdio.h>
int main(){
	int num;
	int d1,d2,d3,d4;
	printf("\n Enter a 4- digit number");
	scanf("%d",&num);
	d4 = num % 10;
	num = num / 10;
	
	d3 = num % 10;
	num = num / 10;
	
	d2 = num % 10;
	num = num / 10;
	
	d1 = num % 10;
	
	printf("\n sum of middle digits = %d",d2 + d3);
	
	return 0;
	
}
