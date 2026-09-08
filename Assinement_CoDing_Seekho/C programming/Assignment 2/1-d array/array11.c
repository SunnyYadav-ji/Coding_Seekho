#include<stdio.h>


int main(){
	int n,val,pos,temp;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the value and position :");
	scanf("%d %d",&val,&pos);
	
	for(int i=n;i>=pos;i--){
		arr[i]=arr[i-1];
	
		if(i==pos){
			arr[i]=val;
		}
	}
	
	 n=n+1;
	
	for(int i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}

	
	
}