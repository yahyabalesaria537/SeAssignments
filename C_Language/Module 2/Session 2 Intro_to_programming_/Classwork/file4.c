#include<stdio.h>
main(){
	FILE *fp;
	int enroll,i;
	char name[20];
	char email[30];
	char ch;
	
	fp=fopen("studentlist.csv","a");
	for(i=1;i<3;i++){
		printf("\n enter student enroll name and email of %d",i);
		scanf("%d %s $s",&enroll,name,email);
		fprintf(fp,"%d,%s,%s\n",enroll,name,email);
	}
	fclose(fp);
	
	fp=fopen("studentlist.csv","r");
	while((ch=getc(fp))!= EOF){
		if(ch==','){
			printf("\t");
			continue;
		}
		printf("%c",ch);
	}
	fclose(fp);
}
