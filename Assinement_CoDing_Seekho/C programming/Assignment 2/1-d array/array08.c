#include<stdio.h>

int main(){
	int n,t,count=0;
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
	 	count++;
	  }
	}
	
 printf("%d occurs %d times",t,count);



	return 0;
	
}