#include<stdio.h>
// recursive function:function call itself
int factfind(int num){//5 //5*f(4) 5 *4*f(3)//5*4*3*f(2) //5*4*3*2*f(1)
  if(num==1){
  	return 1;
  }
  int f= num*factfind(num-1);
  return f;
}
main(){
	int num,i,fact=1;
	printf("\n enter num");
	scanf("%d", &num);
	printf("\n factorial of %d=%d",num,factfind(num));
	for(i=1;i<=num;i++){
		fact*=1;
	}
	printf("\n factorial of %d=%d",num,fact);
}
