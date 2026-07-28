#include<stdio.h>
#include<string.h>
main(){
	char str[10],str2[10],str3[20];
	printf("\n enteer str1");
	scanf("%s",str);
	strcpy(str2,str);
	printf("\n str2=%s",str2);
	printf("\n len of str=%d",strlen(str));
	printf("\n strcmp=%d",strcmp("bbc","acd"));
	strcat(str,"hello");
	printf("\n concat=%s",str);
	printf("\n str2=%s",strupr(str2));
}
