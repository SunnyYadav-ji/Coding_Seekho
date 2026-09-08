#include<stdio.h>
//Largest of three numbers
int main(){
	int x,y,z;
	printf("Enter three numbers:");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x>=y && x>=z){
		printf("Largest = %d",x);
	}
	else if(x<=y && y>=z){
		printf("Largest = %d",y);
	}
	else{
		printf("Largest = %d",z);
	}
}