#include<stdio.h>
main(){
	int dailysteps[7]={5000,6500,7500,4800,1100,9000,6600};
	int i;
	for(i=0;i<7;i++){
		printf("\nDay %d steps = %d",i+1,dailysteps[i]);
	}
}
