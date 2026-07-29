#include<stdio.h>
struct user{
	char name[20];
	int uid;
	char email[20];
};
main(){
	struct user u1={"Yahya",101,"yah@gmail.com"};
	struct user u2={"Dhruvin",102,"dh@gmail.com"};
	printf("\n name=%s email:%s uid=%d",u1.name,u1.email,u1.uid);
	printf("\n name=%s email:%s uid=%d",u2.name,u2.email,u2.uid);
}
