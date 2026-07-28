#include<stdio.h>
// password length 8 less msg
main(){
	int i=0,len;
	char pwd[20];
	printf("\n enter password");
	scanf("%s",pwd);
	while(pwd[i]!='\0'){
		i++;
	}
	printf("\n len=%d",i);
	(i >=8)?printf("\n valid password"):printf("\n invalid password");
	
}
