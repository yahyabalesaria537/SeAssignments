#include<stdio.h>
void formatfollowerscount(int count){
	//if folllowers are less than 1000,print the number as it is
	if(count<1000){
		printf("\n%d",count);
	}
	//if followers are 1000 or more,but less than 1 millions
	else if(count<1000000){
		printf("%.1fk\n",count/1000.0);
	}
	//if followers are 1 millions or more
	else{
		printf("%.1fm\n",count/1000000.0);
	}
}
main(){
	//test the function with different followers count
	formatfollowerscount(1500);
	formatfollowerscount(1200000);
	formatfollowerscount(600);
}
