#include<stdio.h>
main(){
	int ch;
	printf("\n press 1 for breakfast");
	printf("\n press 2 for lunch");
	printf("\n press 3 for snack");
	printf("\n press 4 for dinner");
	printf("\n enter your choice");
	scanf("%d",&ch);
	printf("\n choice=%d",ch);
	switch(ch){
		case 1:
			printf("\n jalebi & fafda");
			break;
			case 2:
				printf("\n chicken & roti");
				break;
				case 3:
					printf("\n burger");
					break;
					case 4:
						printf("\n chicken rice");
						break;
						default:
							printf("\n try some moctails");
	}
}
