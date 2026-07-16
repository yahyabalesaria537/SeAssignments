#include<stdio.h>
//nested condition
main(){
	int maths,phy,chem,subtotal,total;
	printf("\n Enter the marks of maths phy and chem");
	scanf("%d %d %d",&maths,&phy,&chem);
	if(maths >= 65 && phy >=55 && chem >=50){
		 total = maths+chem+phy;
		 subtotal = maths+phy;
		 if(total >=190 || subtotal >=145){
		 	  printf("\n eligible for admision");
		 }
		 else{
		 	printf("\n Not eligible for admision  inner");
		 }
	}
	else{
		 printf("\n Not eligible for admision outer");
	}
}
