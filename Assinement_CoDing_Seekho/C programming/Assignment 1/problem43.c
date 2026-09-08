#include<stdio.h>

int main(){
    int n;
    
	printf("Enter a binary number:");
	scanf("%d",&n);
	
	
	
	
	int binary=0;
	int i=0,num=n;
	while(num!=1){
	  
		num=num/2;
		
	  i++;	
	}
	int rem[i];
	  rem[0]=1;
	for(int j=1;j<i;j++){
		rem[j]=n%2;
		n=n/2;
	}
	for(int j=i-1;j>=0;j--){
		binary=binary*10+rem[j];
	}
	
	
	
	printf("Binary =%d",binary);
	
	
}