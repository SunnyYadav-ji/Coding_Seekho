#include<stdio.h>


int main(){
	
	int n,d;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter a scearhing number:");
	scanf("%d",&d);
	
	int num=n,rem=0,count=0;
	while(num!=0){
		
		rem=num%10;
		if(rem==d){
			count++;
		}
		
	
		num=num/10;
	}
	
	
	
	
	
	
	
	printf("%d appears %d times",d,count);
	

}