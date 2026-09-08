#include<stdio.h>
int countDigits(int n){
	int a=0;
	while(n!=0){
		n=n/10;
		a++;
	}
	return a;
}


int main(){
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	
	int i = countDigits(x);
	
	printf("Digit count = %d",i);
	
	
	
}