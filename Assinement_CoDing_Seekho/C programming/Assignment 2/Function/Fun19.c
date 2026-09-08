#include<stdio.h>
float average(int m,int n,int o){

return (m+n+o)/3.0;	
	
}

int main(){
	int x,y,z;
	printf("Enter three numbers:");
	scanf("%d%d%d",&x,&y,&z);
	
	float value = average(x,y,z);
	
	printf("Average = %.2f",value);
	
	
}