#include<stdio.h>

int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int a[n];
	printf("numbers:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int max=0;
	for(int i=0;i<n;i++){
		if(a[i]>=a[i-1]){
		max=a[i];	
		}
		
	}
	
	
		printf(" Largest = %d",max);
	
	
	
	
	
	
	
	
	
	
}