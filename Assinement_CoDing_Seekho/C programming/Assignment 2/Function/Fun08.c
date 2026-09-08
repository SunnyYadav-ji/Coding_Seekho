#include<stdio.h>
float Si(float x,float y,float z){	
	return (x*y*z)/100;
}


int main(){
	int p,r,t;
	printf("enter p,t & r");
	scanf("%d %d %d",&p,&t,&r);
	
	float value=Si(p,r,t);
	
	
	
	printf("SI = %.2f",value);
	
	
	
	
}