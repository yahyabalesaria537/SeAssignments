#include<stdio.h>
void add(int x,int y);//function declaration
int square(int num);
main(){
	int sqAns;
	add(100,400);
	add(2,5);
	sqAns=square(5);
	printf("\n square of 5=%d",sqAns);
	printf("\n square of 11=%d",square(11));
}
void add(int x,int y){//defination
     int ans=x+y;
     printf("\n addition of %d and %d = %d",x,y,ans);
}
int square(int num){
	int s= num*num;
	return s;
}
