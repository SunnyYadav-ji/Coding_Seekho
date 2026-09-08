#include<stdio.h>
//Fibonacci series
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	int fib=1,pre,per;
	printf("0 1 1");
	for(int i=2;i<n;i++){
		pre=fib;
		per=i;
		fib=per+pre;
		printf(" %d",fib);
		
		
	}
	
	
	
	
	
}