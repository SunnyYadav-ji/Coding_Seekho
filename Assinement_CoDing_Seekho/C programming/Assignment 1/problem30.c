#include<stdio.h>

int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	int ans=0;
	int num=n;
	int Digit,digitcube;
	while(num!=0){
		Digit=num%10;
		digitcube=Digit*Digit*Digit;
		ans=ans+digitcube;
		num=num/10;
	}
	
	if(n==ans){
		printf("%d is an Armstrong number",n);
	}
	else
	{
		printf("%d is NOT an Armstrong number",n);
	}
	
	
	
	
	
	
	
	
	
}n