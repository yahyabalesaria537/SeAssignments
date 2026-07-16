#include<stdio.h>
main(){
	int d,rem,sum=0;
	printf("Enter number: ");
	scanf("%d",&d);
	
	while(d>0)
	{
       rem = d % 10;
       sum = sum + rem;
       d = d / 10;
	}
	printf("\nsum = %d",sum);
	
	return 0;
}
	
	
	


	

