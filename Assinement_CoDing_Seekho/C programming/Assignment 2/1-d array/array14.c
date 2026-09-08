#include<stdio.h>


int main(){
	int n,largest=0,secondlargest=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=1;i<n;i++){
		
		if(arr[i]<arr[i-1]){	
		printf("Array is Not sorted");
		return 0;
		}
		
	}
	
	
		printf("Array is sorted");
	   return 0;
	
	
}