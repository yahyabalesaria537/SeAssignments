#include<stdio.h>
main(){
	int choice = 0;
	char team[50];
	
	while(choice!=3){
		printf("\===== IPL MENU =====\n");
		printf("1. view favourite 3 IPL teams\n");
		printf("2. add new team\n");
		printf("3. exit\n");
		printf("enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("\n my favourite IPL teams: \n");
				printf("1.Kolkata Knight Riders \n");
				printf("2.Sunsrisers Hyderabad \n");
				printf("3.Mumbai Indians\n");
				break;
				
				case 2:
					printf("enter new team name: ");
					scanf(" %[^\n]", team);
					printf("new team added: %s\n",team);
					break;
					
					case 3:
						printf("existing program....\n");
						break;
						
						default:
							printf("invalid choice! please try again.\n");
		}
	}
}
