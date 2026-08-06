#include<stdio.h>
main(){
	float price,discount,finalprice;
	int ismember;
	printf("enter product price: ");
	scanf("%f",&price);
	printf("enter discont percentage: ");
	scanf("%f",&discount);
	printf("ismember? (1=yes,0=no): ");
	scanf("%d",&ismember);
	//apply normal discount
	finalprice = price - (price * discount / 100);
	// apply extra 5% discount if member
	if(ismember ==1){
		finalprice = finalprice - (finalprice * 5 / 100);
	}
	printf("\n finalprice = %.2f",finalprice);	
}
