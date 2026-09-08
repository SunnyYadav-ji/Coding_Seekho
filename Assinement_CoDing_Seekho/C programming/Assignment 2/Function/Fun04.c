#include<stdio.h>
int square(int x){
	
	return x*x;
}

int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	int Square =square(n);
	
	printf("Square = %d",Square);
	
}