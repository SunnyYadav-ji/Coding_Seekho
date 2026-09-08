#include<stdio.h>
int sum(int num){
   int sum=0;
	while(num!=0){
	sum=sum+num%10;
	num=num/10;
		
	}
	
	return sum;
	
	
}


int main(){
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	
	
	int n=sum(x);
	printf("Sum of digits = %d",n);
	
	
	
		
}