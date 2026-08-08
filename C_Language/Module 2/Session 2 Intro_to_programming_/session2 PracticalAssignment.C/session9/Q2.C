#include<stdio.h>
main(){
	int playlistratings[3][5]={
		{4,5,3,4,5},
		{5,4,3,5,4},
		{3,4,5,3,4},
	};
	int i;
	printf("\n ratings of second playrist: ");
	for(i=0;i<5;i++){
		printf("day %d = %d\n",i+1,playlistratings[1][i]);
	}
}
			
