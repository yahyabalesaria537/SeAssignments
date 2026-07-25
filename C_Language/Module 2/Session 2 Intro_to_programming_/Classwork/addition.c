#include<stdio.h>
main(){
	 int a[2][2],b[2][2],c[2][2];
	 int i,j;
	 for(i=0;i<2;i++){
	 	for(j=0;j<2;j++){
	 		printf("\n Enter a[%d][%d]",i,j);
	 		scanf("%d",&a[i][j]);
		 }
	 }
	 for(i=0;i<2;i++){
	 	for(j=0;j<2;j++){
	 		printf("\n Enter b[%d][%d]",i,j);
	 		scanf("%d",&b[i][j]);
		 }
	 }
	 for(i=0;i<2;i++){
	 	for(j=0;j<2;j++){
	 		c[i][j]=a[i][j]+b[i][j];
		 }
	 }
	 for(i=0;i<2;i++){
	 	for(j=0;j<2;j++){
	 		printf("\ta[%d][%d]=%d",i,j,a[i][j]);
		 }
		 printf("\n");
	 }
	 for(i=0;i<2;i++){
	 	for(j=0;j<2;j++){
	 		printf("\tb[%d][%d]=%d",i,j,b[i][j]);
		 }
		 printf("\n");
	 }
	 for(i=0;i<2;i++){
	 	for(j=0;j<2;j++){
	 		printf("\tc[%d][%d]=%d",i,j,c[i][j]);
		 }
		 printf("\n");
	 }
	 
	 
	 
	 
	 
	 
	 
	 
}
