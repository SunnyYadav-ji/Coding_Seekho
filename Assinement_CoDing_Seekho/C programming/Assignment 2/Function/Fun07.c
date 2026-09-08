#include<stdio.h>
int largest(int n,int m){
	if(n>=m){
		return n;
	}
	else{
	  return m;	
	}
	
	
	
	
}

int main(){
	int x,y;
	printf("Enter two number: ");
	scanf("%d%d",&x,&y);
	
	
	
	
	int L=largest(x,y);
	printf("Largest = %d",L);
	
	
}