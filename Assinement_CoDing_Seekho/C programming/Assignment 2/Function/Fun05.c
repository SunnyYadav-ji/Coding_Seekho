#include<stdio.h>

isPrime(int x){
	int count=0;
	for(int i=1;i<x;i++){
	if(x%i==0){
	count++;	
	}	
	}
	
	
	if(count==1){
	 return 1;
	}
	else{
	return 0;
	}
	
	
	
	
	
}

int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	int prime = isPrime(n);
	
	if(prime==1){
		
		printf("%d is Prime",n);
	}
	else{
		printf("%d is NOT Prime",n);
	}
	
	
	
	
	
}