#include<stdio.h>
main(){
	FILE *fp;
	char ch;
	fp=fopen("hello1.txt","w");
	fputc('y',fp);
	fclose(fp);
	
	fp=fopen("hello1.txt","r");
	ch=getc(fp);
	printf("\n data from file=%c",ch);
	fclose(fp);
}
