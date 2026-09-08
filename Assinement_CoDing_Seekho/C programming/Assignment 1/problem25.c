#include<stdio.h>
//palindrome number check:
int main(){
	int n,rev=0;
	printf("Enter a number:");
	scanf("%d",&n);
	int num=n;
	while(n!=0){
	rev=rev*10+n%10;
	n=n/10;	
	}
	if(rev==num){
		printf("%d is Palindrome:",num);
	}
	else{
		printf("%d is  Not Palindrome:",num);
	}
	
	
}