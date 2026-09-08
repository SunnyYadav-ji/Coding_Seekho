#include<stdio.h>

int main(){
	
	int n,m;
	printf("enter two numbers:");
	scanf("%d %d",&n,&m);
	
	int gcd=0,lcm;
	
	for(int i=1;i<n;i++){
		if(n%i==0 && m%i==0){
			
			gcd=i;
			
		}
		
	}
	
	lcm=(n*m)/gcd;
	
	printf("GCD=%d LCM=%d",gcd,lcm);
	
	
	
	 return 0;
}