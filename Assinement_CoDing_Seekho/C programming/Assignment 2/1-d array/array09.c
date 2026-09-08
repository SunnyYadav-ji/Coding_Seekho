#include<stdio.h>


int main(){
	int n,t;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	
	int arr[n],copy[100];
	
	printf("Enter your array:");
	for(int i=0;i<n;i++){
		scanf("%d\t",&arr[i]);
		copy[i]=arr[i];
	}
	
	printf("Copied Array : ");
	
	for(int i=0;i<n;i++){
	 printf("%d\t",copy[i]);
	}
	
	
	return 0;
	
}