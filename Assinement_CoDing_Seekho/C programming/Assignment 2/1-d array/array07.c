#include<stdio.h>


int main(){
	int n,t;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the target element of array:");
	scanf("%d",&t);
	
	 
	
	for(int i=0;i<n;i++){
	 
	 if(arr[i]==t){
	 	printf(" Found at position %d",i+1);
	 	return 0;
	 }
	}
	
	printf("Not Found");
	
	return 0;
	
}