#include<stdio.h>
main(){
	char ch= 'a';// char 1byte %c
	int x=100;// int 4byte %d
	float y=5.67;// float 4byte %f
	double z=1.2;// double 8byte %lf
	char name[11]= "Yahya";
	printf("\n single char=%c",ch);
	printf("\n x=%d",x);
    printf("\n y=%f",y);
    printf("\n z=%Lf",z);
    printf("\n name=%s",name);
}
