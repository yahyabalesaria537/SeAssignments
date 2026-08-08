#include<stdio.h>
void capitalizefirstletter(char text[]){
	if(text[0] >= 'a'&& text[0] <= 'z'){
		text[0] = text[0] - 32;
	}
}
main(){
	char product[] = "Iphone";
	char username[]= "rohit sharma";
	capitalizefirstletter(product);
	capitalizefirstletter(username);
	printf("\n product: %s",product);
	printf("\n username:%s",username);
}
