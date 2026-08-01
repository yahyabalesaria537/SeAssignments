#include<stdio.h>
main(){
	FILE *fp;
	char data[20];
	fp=fopen("hello.txt","w");
	fprintf(fp,"hello world");
	fclose(fp);
	
	fp=fopen("hello.txt","r");
   //fscanf(fp,"%s",data);
    fgets(data,20,fp);
    printf("\n data from file=%s",data);
    fclose(fp);
    
}
   
