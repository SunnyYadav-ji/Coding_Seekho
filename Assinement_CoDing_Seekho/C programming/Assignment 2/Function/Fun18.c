#include<stdio.h>
void swap(int n,int m){
	int temp=n;
	  n=m;
	  m=temp;
	  
	  printf
	  (" After Swap:n=%d m=%d",n,m);
	
	
}

int main(){
	int x,y;
	printf("Enter two number:");
	scanf("%d%d",&x,&y);
	
	swap(x,y);
	return 0;
	
}