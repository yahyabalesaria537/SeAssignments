#include<stdio.h>
main(){
	const float GST_RATE =18.0; // constant GST rate
	float baseprice,gstamount,finalprice;
	 
	printf("\n Enter the base price of the zomato order: ");
	scanf("%f",&baseprice);
	
	gstamount = (baseprice *GST_RATE)/100;
	finalprice = baseprice + gstamount;
	
	printf("\n baseprice = %.2f",baseprice);
	printf("\n GST (%.0f%%)= %.2f",GST_RATE,gstamount);
	printf("\n finalprice = %.2f",finalprice);
}
