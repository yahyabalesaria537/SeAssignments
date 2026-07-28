#include<stdio.h>
main(){
	char name [10]={'t','o','p','s','\0'},cname[10];
	printf("name=%s",name);
	printf("\n Enter company name");
// scanf("%S",cname);
    gets(cname);
   // printf("\n company name=%s",cname);
   puts(cname);
}
