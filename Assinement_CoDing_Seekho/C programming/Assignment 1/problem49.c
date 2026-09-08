#include<stdio.h>


int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
		
		float sum=0;
	for(float i=1;i<=n;i++){
		sum=sum + (1/i);
	}
	
	
		printf(" Sum = %lf",sum);
	
	
	
	return 0;
	
	
}