#include<stdio.h>
main(){
	FILE *fp;
	char str[20];
	fp=fopen("hello1.txt","w");
	fputs("welcome to c tuto",fp);
	fclose(fp);
	
	fp=fopen("hello1.txt","r");
	fgets(str,20,fp);
	printf("\n data from file=%s",str);
	fclose(fp);
}
