#include<stdio.h>

int main(){
	 int n;
	 printf("Enter a binary number:");
	 scanf("%d",&n);
	
	
	
	
	int decimal=0,rem=0;
	int i=0;
	while(n!=0){
		rem=n%10;
		if(rem==1){
	
			
		decimal=decimal+pow(2,i);
		}
		n=n/10;
	  i++;	
	}
	
	
	printf("Decimal =%d",decimal);
	
	
	 
	
	
}