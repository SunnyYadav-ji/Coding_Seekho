#include<stdio.h>
//Sum of first N numbers
int main(){
	int n,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=i;
	
	}
	printf("Sum = %d",sum);

}