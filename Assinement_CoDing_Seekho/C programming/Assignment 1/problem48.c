#include<stdio.h>


int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
		printf("%d",n);
		int count=0;
	while(n!=1){
		if(n%2==0){
			n=n/2;
			printf("-->%d",n);
			
		}
		else{
			
			n=n*3+1;
			printf("-->%d",n);
			
		}
		
			count++;
	}
	
	
		printf(" Steps=%d",count);
	
	
	
	return 0;
	
	
}