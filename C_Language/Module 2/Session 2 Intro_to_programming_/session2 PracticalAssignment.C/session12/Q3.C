#include<stdio.h>
struct movieshow{
	char movie[50];
	int screen;
	
	struct time{
		int hours;
		int minutes;
	} time;
};
main(){
	struct movieshow show ={" JAN NETA",4,{7,30}};
	printf("Movie: %s, Screen: %d, Time: %02d:%02d\n",
           show.movie,
           show.screen,
           show.time.hours,
           show.time.minutes);
}
