#include<stdio.h>


int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	int count=0,a;
	for(int i=1;i<n;i++){
		int square=i*i;
		if(square==n){
			a=i;
			count++;
			printf("%d is a perfect square:",a);
			break;
		}
		
	}
	
	
  if(count==0){
  			printf("%d is  not a perfect square:",a);
  }
 
	
	
	return 0;
	
	
}