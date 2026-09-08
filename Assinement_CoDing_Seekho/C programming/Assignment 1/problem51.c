#include<stdio.h>

int main(){
	int n;
	
	do{
	printf("\nenter a number:");
	scanf("%d",&n);
	
	if(n>=1 && n<=10){
		printf("Valid input!");
		break;
		
	}
	else{
		printf("InValid!");	
		
	}
		
	}while(n<=0 || n>=11);
	
}