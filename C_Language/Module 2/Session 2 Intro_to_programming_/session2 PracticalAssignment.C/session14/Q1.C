#include<stdio.h>
main(){
	char items[3][20]={"Burger","pizza","fries"};
	int prices[3]={120,250,100};
	int total =0;
	// loop through all items and add their prices
	for(int i=0;i<3;i++){
		total += prices[i];
	}
	printf("\n total price is: %d",total);
}
