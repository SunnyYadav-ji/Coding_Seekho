#include<stdio.h>


int main(){
	int n,even=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
		 even+=arr[i];
		}
	}
	
	
	printf("Even = %d\t",even);
	
	
	
}