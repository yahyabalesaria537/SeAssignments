#include<stdio.h>
main(){
	int num;
	printf("\n Enter number");
	scanf("%d",&num);
	
	if(num%2==0){
		goto even;
		
	}
	else{
		goto odd;
	}
	
	even:{
		printf("\n num is even");
		return;
	}
	odd:{
		printf("\n num is odd");
		return;
	}
}
