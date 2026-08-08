#include<stdio.h>
main(){
	int Cricketscores[4][2]={
	{190,182},
	{201,199},
	{165,178},
	{240,220},	
	};
	
	int i;
	for(i=0;i<4;i++){
		if(Cricketscores[i][0] > Cricketscores[i][0]){
			printf("match %d highest score = %d\n",i+1,Cricketscores[i][0]);
		}
		else{
			printf("match %d highest score = %d\n",i+1,Cricketscores[i][0]);
		}
	}
}
