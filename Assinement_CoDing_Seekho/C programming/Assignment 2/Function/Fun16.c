#include<stdio.h>
int isArmstrong(int n){
	int num=n,i,cube=0;
	
	while(num!=0){
		i=num%10;
		cube+=i*i*i;
		num=num/10;	
	  }
	if(n==cube){
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
	
	int value = isArmstrong(x);
	if(value==1){
		
	printf("%d is an Armstrong Number",x);
	}
	else{
		printf("%d is NOT an Armstrong Number",x);
	}
}