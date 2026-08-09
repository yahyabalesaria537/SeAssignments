#include<stdio.h>
main(){
	FILE *file;
	file=fopen("playlist.txt","a");
	fprintf(file,"Challa\n");
	fprintf(file,"Ilaahi\n");
	fclose(file);
    printf("Songs added successfully!\n");
}
