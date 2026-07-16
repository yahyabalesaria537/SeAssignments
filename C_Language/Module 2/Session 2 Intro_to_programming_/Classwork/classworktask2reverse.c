#include<stdio.h>
main(){
	int d,rem,rev=0;
	printf("Enter number: ");
	scanf("%d",&d);
	
	while(d>0)
	{
		rem = d% 10;
		rev = rev * 10 + rem;
		d = d / 10;
	}
	printf("reverse =%d",rev);
	
	return 0;
}
