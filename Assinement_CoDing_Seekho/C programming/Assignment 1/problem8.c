#include <stdio.h>
//Even or Odd
int main() {
	int i;
	printf("Enter a number :");
	scanf("%d",&i);
	if(i%2==0){
		printf("%d is Even",i);
	}
	else
	{
		printf("%d is Odd",i);
	}

}