#include<stdio.h>

int main(){
	int a,b;
	int  ans=1;
	printf("Enter a number and their power:");
	scanf("%d%d",&a,&b);
	
	for(int i=0;i<b;i++){
	   ans=ans*a;
	}
	printf("%d^%d = %d",a,b,ans);
	
	
}