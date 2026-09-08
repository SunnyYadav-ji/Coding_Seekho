#include<stdio.h>
int cube(int m){
	
	return m*m*m;	
}

int main(){
	int x,y,z;
	printf("Enter a number:");
	scanf("%d%d%d",&x,&y,&z);
	
	int a=cube(x);
	int b=cube(y);
	int c=cube(z);
	
	printf("Cube(%d)=%d\t",x,a);
	printf("Cube(%d)=%d\t",y,b);
	printf("Cube(%d)=%d\t",z,c);
}