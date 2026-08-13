#include<stdio.h>
main(){
	float hours[7];
	float total = 0, average;
	int i ,j, highestday=0;
	
	for(i=0;i<7;i++){
	   do{
	   		printf("\n enter study hours for day %d: ",i+1);
		scanf("%f",&hours[i]);
		if(hours[i]<0|| hours[i]>24){
			printf("\n invalid input! enter hours between 0 and 24");
	   }	
	} while(hours[i]<0||hours[i]>24);
	total = total + hours[i];
	if(hours[i]> hours[highestday]){
		highestday=i;
		}
	
	}
	average = total /7;
	
	printf("\n weekly total: %2.f hours",total);
	printf("\n daily average:%2.f hours",average);
	printf("\n highest study hours: day %d(%2.f hours)",highestday + 1,hours[highestday]);
	printf("\n daily study chart:");
	
	for(i=0;i<7;i++){
		printf("day %d:",i+1);
		for(j=0;j<(int)hours[i];j++){
			printf("* ");
		}
		printf("\n");
	}
}
