#include<stdio.h>
void swapplaylistcounts(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
main(){
	int playlist1 = 45;
	int playlist2 = 65;
	
	printf("\n before swapping: ");
	printf("\n playlist 1 = %d",playlist1);
	printf("\n playlist 2 = %d",playlist2);
	
	//swapplaylistcounts(&playlist1,&playlist2);
	
	printf("\n after swapping: ");
	printf("\n playlist 1 = %d",playlist1);
	printf("\n playlist 2 = %d",playlist2);
}
