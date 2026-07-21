#include<stdio.h>
//without returntype without parameter
void display(){
	printf("\n hello world");
}
//without returntype with parameter
void add(int x,int y){//defination
     int ans= x+y;
     printf("\n addition of %d and %d =%d",x,y,ans);
}
// with return without parameter
float areaOfCircle(){
	int r;
   float area;
   printf("\n enter radius");
   scanf("%d ,&r");
   area = 3.14*r*r;
   return area;
}
//with return type with parameter
float areaOfCirclesec(int r){
	float area;
	area = 3.14*r*r;
	return area;
}
main(){
	display();
	add(12,78);
	printf("\n area of circle=%f",areaOfCircle());
	printf("\n area of circle of second =%f",areaOfCirclesec(3));
}
