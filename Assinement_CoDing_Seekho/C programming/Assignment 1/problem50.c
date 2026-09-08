#include<stdio.h>

int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	
	int fac;
	for(int i=1;i<n;i++){
		if(n%i==0){
		fac=i;
		}
	}
	int count=0;
	for(int j=1;j<=n;j++){
		
		if(j%fac==0){
			count++;
			
		}
		
	}
	
	printf("Trailing zeros in %d! = %d",n,count);
	
	
}