#include<stdio.h>
main(){
	int totalcartamount;
	printf("enter your totalcartamount: ");
	scanf("%d",&totalcartamount);
	printf("\n totalcartamount=%d",totalcartamount);
	if(totalcartamount>2000){
		printf("\n discount 20%");
		totalcartamount =totalcartamount-20*totalcartamount/100;
		printf("\n totalcartamount=%d",totalcartamount);
	}
	else if(totalcartamount>1000){
	printf("\n discount 10%");
	totalcartamount=totalcartamount-10*totalcartamount/100;
	printf("\n totalcartamount=%d",totalcartamount);
    } 
    else{
    	printf("\n no discount");
    	printf("totalcartamount=%d",totalcartamount);
	}
	
}
 

