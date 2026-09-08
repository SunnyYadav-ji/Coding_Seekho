#include <stdio.h>
//Positive,Negative, or Zero
int main() {
	int i;
	printf("Enter a number :");
	scanf("%d",&i);
	if(i>0){
		printf("Positive");
	}
	else if(i<0)
	{
		printf("Negative");
	}
	else{
		printf("Zero");
		
	}

}