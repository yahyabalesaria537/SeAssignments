#include<stdio.h>
main(){
	int a[5]={12,34,56,78,90};
	char ch[5]={'m','e','g','h','a'};
    int i;	
	for(i=0;i<5;i++){
	printf("\n a[%d]=%d",i,a[i]);
	}
	printf("\n char array\n");
	for(i=0;i<5;i++){
		printf("\n char[%d]=%c",i,ch[i]);
	}
}
