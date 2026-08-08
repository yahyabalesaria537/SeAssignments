#include<stdio.h>
void formatprice(int price){
	printf("\n Rs.%d",price);
}
main(){
	int price1=1599;
	int price2=3499;
	int price3=999;
	printf("\n product 1 price: ");
	formatprice(price1);
	printf("\n product 2 price: ");
	formatprice(price2);
	printf("\n product 3 price: ");
	formatprice(price3);
}
