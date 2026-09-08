#include<stdio.h>

int main(){
	int n,pos,temp;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the position :");
	scanf("%d",&pos);
	pos=pos-1;
	for(int i=pos;i<n-1;i++){
		arr[i]=arr[i+1];
	
		
	}
	
	 n=n-1;
	
	for(int i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}

	
	
}