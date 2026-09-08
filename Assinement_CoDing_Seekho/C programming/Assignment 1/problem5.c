#include <stdio.h>
//Swap two numbers
int main() {
	int a,b,temp=0;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%d b=%d",a,b);

}