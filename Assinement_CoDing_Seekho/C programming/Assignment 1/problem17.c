#include<stdio.h>
//Reverse of a 3-Digit number
int main(){
	int n,rem=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
	  
	rem=rem*10+n%10;
	n=n/10;	
		
	}
	printf("%d",rem);
	

	
}