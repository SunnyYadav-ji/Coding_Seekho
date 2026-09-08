#include<stdio.h>
//print numbers 1 to N
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf(" %d",i);
	}	
}