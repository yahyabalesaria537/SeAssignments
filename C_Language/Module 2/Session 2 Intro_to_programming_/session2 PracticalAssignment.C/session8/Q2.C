#include<stdio.h>
void addTocart(char cart[][20],int *count,char product[]){
	int i=0;
	while(product[i]!='\0'){
		cart[*count][i]=product[i];
		i++;
	}
	cart[*count][i]= '\0';
	(*count)++;
	printf("updated cart:\n");
	for(i=0;i < *count;i++){
		printf("\n %s",cart[i]);
	}
}
main(){
	char cart[10][20] = {"shirt","shoes"};
	int count = 2;
	addTocart(cart,&count,"watch");
}
