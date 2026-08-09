#include<stdio.h>
struct fooditem{
	char itemname[50];
	float price;
	float rating;
};
main(){
	struct fooditem food[3]={
		{"pizza",399.00,4.5},
		{"burger",499.00,4.2},
		{"biryani",199.00,4.7},
	};
	int i;
	for(i=0;i<3;i++){
		printf("\n item: %s",food[i].itemname);
		printf("\n price: %.2f",food[i].price);
		printf("\n rating: %.1f",food[i].rating);
	}
}
