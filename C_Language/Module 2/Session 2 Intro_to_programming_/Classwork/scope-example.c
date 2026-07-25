#include<stdio.h>
float pi=3.14;//global scope
void areaOfcircle(int r){// r formal parameter
   float area= r*r*pi;
   printf("\n area of circle=%f",area);
}

main(){
	
	
	{
		int x=100;//local varaible
		printf("\n x=%d",x);
		printf("\n in local scope pi=%f",pi);
	}
	// printf("\n x=%d",x);=>generate error like undefine variable
	printf("\n in main scope pi=%f",pi);
	areaOfcircle(5);	
}
