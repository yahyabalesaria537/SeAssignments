#include<stdio.h>
main() {
    FILE *file;

    file = fopen("playlist.txt", "w");

    fprintf(file, "Lavan\n");
    fprintf(file, "Jaan se guzarte hai\n");
    fprintf(file, "Toh phir aao\n");

    fclose(file);
    printf("Songs successfully written to playlist.txt\n");

}

	
