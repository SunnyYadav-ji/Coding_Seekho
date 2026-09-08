#include<stdio.h>
//Largest of Two numbers
int main() {
	int i,j;
	printf("Enter two numbers:");
	scanf("%d%d",&i,&j);
	if(i>j){
		printf("%d is larger",i);
	}
	else if(i<j)
	{
		printf("%d is larger",j);
	}
	else{
		printf("Both are equal");
		
	}

}