#include<stdio.h>
//count Even number from 1 to N
int main(){
	int n,count=0;
	printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    	if(i%2==0){
    		count++;
		}
	}
	printf("Even count = %d",count);
	
	
	
	
}