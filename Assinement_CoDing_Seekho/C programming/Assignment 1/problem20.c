#include<stdio.h>
//Grade calcultor
int main(){
	int n;
	printf("Enter your marks:");
	scanf("%d",&n);
	
	if(n>=90 && n<=100){
		printf("Grade: A+");
	}
   else if(n>=75 && n<=89){
		printf("Grade: A");
	}
  else if(n>=60 && n<=74){
		printf("Grade: B");
	}
  else if(n>=45 && n<=59){
		printf("Grade: C");
	}
	else{
		printf("Grade: Fail");
	}
}