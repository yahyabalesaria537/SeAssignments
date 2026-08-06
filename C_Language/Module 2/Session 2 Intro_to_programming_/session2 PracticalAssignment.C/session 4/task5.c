#include<stdio.h>
main(){
	int followercount = 100;
	printf("\n initial follower count =%d",followercount);
	//pre-increement
	printf("\n pre -increement (++followercount=%d)",++followercount);
	printf("\n followercount after pre - increement =%d",followercount);
	// reset value
	followercount=100;
	//post-increement
	printf("\n post -increement (followercount++) =%d",followercount++);
	printf("\n followercount after post -increement=%d",followercount);
}
