#include<stdio.h>
float calculateaverage(int orders[],int size){
	int i;
	int sum=0;
	
	for(i=0;i<size;i++){
		sum = sum + orders[i];
	}
	return (float)sum/size;
}
main(){
	int dailyorders[7]= {350,550,650,780,125,555,909};
	float average;
	average= calculateaverage(dailyorders,7);
	printf("average weekly zomato spend = %2.f\n",average);
}
