#include<stdio.h>

int ispalindrome(int n){
	int rev =0;
	int num=n;
	while(num!=0){
		rev= rev*10 + num%10;
		num=num/10;
	}
	if(n==rev){
		return 1;
	}
	else{
		return 0;
	}
	
}


int main(){
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	
	
	int value= ispalindrome(x);
	
	if(value==1){
		printf("%d is a Palindrome",x);
	}
	else{
		printf("%d is NOT a Palindrome",x);
	}
	
}