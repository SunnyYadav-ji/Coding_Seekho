#include<stdio.h>
void CtoF(int  c){
	float f;
	f=(9*c/5)+32;
	
	printf("Fahrenheit = %.2f",f);
	
} 


int main(){
	int x;
	printf("Enter the temperture in celsius:");
	scanf("%d",&x);
	
	CtoF(x);
	
}