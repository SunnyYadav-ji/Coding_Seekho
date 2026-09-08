#include<stdio.h>


int main(){
	int n,largest=0,secondlargest=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]>=largest){
			
		secondlargest=largest;
		largest = arr[i];
		
		}
		
	}
	
	
	printf(" Second Largest = %d",secondlargest);
	
	
}