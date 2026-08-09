#include<stdio.h>
//Function to check whether a number is even
int isEven(int num){
	//if number is divisible by 2,it is even
	if(num %2 == 0){
		return 1;
	}
	else{
		return 0;
	}
}
main(){
	int number = 10;
	if(isEven(number)){
		printf("%d is Even\n",number);
	}
	else{
		printf("%d is Odd\n",number);
	}
}
