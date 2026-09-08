#include<stdio.h>

int add(int a,int b){
	
	return a+b;
}




int main(){
	int x,y;
	printf("enter value of x and y:");
	scanf("%d%d",&x,&y);
	int sum = add(x,y);
	
	printf("Sum = %d",sum);
	
}