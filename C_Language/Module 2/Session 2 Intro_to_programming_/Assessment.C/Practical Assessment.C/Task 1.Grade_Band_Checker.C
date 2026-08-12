#include<stdio.h>
main(){
	float percentage;
	printf("\n Enter your percentage: ");
	scanf("%f",&percentage);
	
if(percentage < 0 || percentage > 100){
	printf("Invalid input");
  }
  else if(percentage >=90){
  	printf("\n Grade: A - excellent work!");
  }
  else if(percentage >=75){
  	printf("\n Grade:  B - good work! keep pushing");
  }
  else if(percentage >=60){
  	printf("\n Grade: C - nice effort!");
  }
  else if(percentage >=45){
  	printf("\n Grade: D - keep practicing!");
  }
  else{
  	printf("\n Grade: F - don't give up. try again.");
  }
}
