#include<stdio.h>
main(){
	int orders[5]={350,250,190,500,999};
	int *ptr;
	int i;
	ptr = orders;
	for(i=0;i<5;i++){
		printf("order amount = %d,address=%p\n",*(ptr + i),(void *)(ptr + i));
	}
}
