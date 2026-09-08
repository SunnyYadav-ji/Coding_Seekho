#include<stdio.h>
int reverseNum(int n){
	int rev=0;
	while(n!=0){
	rev=rev*10+n%10;	
	 n=n/10;	
	}
	
	return rev;
}

int main(){
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	
	int rev=reverseNum(x);
	
	printf("Reverse = %d",rev);
	
	
	
	
	
	
	
}