#include<stdio.h>
int power(int n,int m){
	int pow=1;
	for(int i=1;i<=m;i++){
		pow*=n;
	}
	
	return pow;
}

int main(){
	int x,y;
	printf("Enter two number: ");
	scanf("%d%d",&x,&y);
	
	int value = power(x,y);
	
	printf("%d^%d = %d",x,y,value);
	
	
	
	
	
}