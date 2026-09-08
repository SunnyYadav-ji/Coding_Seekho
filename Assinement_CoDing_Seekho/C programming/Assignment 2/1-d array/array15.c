#include<stdio.h>


int main(){
	int n,sum=0;
	float avg;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	
	
	avg=sum/n;
	
	printf("Average = %.2f",avg);
	
	
}