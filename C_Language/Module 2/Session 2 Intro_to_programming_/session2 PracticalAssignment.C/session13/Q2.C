#include<stdio.h>
main(){
	FILE *file;
	char song[100];
	
	file=fopen("playlist.txt","r");
	while(fgets(song,sizeof(song),file)!=NULL){
		printf("%s",song);
	}
	fclose(file);
}
