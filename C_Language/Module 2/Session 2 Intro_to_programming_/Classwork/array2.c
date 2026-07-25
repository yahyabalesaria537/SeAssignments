#include<stdio.h>
main(){
	int a[5];
	int i;
	for(i=0;i<5;i++){
		printf("\n enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
}
