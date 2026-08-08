#include<stdio.h>
void increaseFollowersbyvalue(int followers){
	followers = followers + 1000;
	printf("\n inside value function: %d",followers);
}
void increaseFollowersbyReference(int *followers){
	*followers = *followers + 1000;
	printf("\n inside Refrence function: %d",*followers);
}
main(){
	int followers = 6000;
	printf("\n Original followers:%d",followers);
	//increasefollowersbyValue(followers);
	printf("\n After pass by value: %d",followers);
	//increasefollowersbyRefernce(&followers);
	printf("\n after pass by reference: %d",followers);
}
