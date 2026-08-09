#include<stdio.h>
struct playlist{
	char title[50];
	char artist[50];
	int duration;
};
main(){
	struct playlist song = {"DIL IBADAT","KK",262};
	printf("\n title:%s",song.title);
	printf("\n artist:%s",song.artist);
	printf("\n duration: %d seconds",song.duration);
}
