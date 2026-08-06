#include<stdio.h>
main(){
	int itemprice,quantity,totalbillamount;
	printf("enter itemprice: ");
	scanf("%d",&itemprice);
	printf("enter quantity: ");
	scanf("%d",&quantity);
	totalbillamount = itemprice * quantity;
	printf("\n enter itemprice=%d",itemprice);
	printf("\n enter quantity=%d",quantity);
	printf("\n enter totalbill amount=%d",totalbillamount);		
}
