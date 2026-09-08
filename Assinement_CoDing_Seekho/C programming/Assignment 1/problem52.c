#include<stdio.h>


int main(){
	int n;;
	printf("enter a number:");
	scanf("%d",&n);
	
	
	int num =n,fac,sum=0;
	while(num!=0){
		fac=num%10;
		for(int i=fac-1;i>=1;i--){
			fac=fac*i;
			
		}
		
		sum=sum+fac;
		
			
		
	num=num/10;	
	}
	
	if(sum==n){
		
		printf("%d is a Strong Number:",n);
		
	}
	else{
		printf("%d is not a Strong Number:",n);
	}
	
	
	
	
	
	
	
	
}