#include<stdio.h>
int fac(int n){
	int Fac=1;
	for(int i=1;i<=n;i++){
		Fac*=i;	
	}
	return Fac;
	
}

int main(){
	int x;
	printf("Enter a number :");;
	scanf("%d",&x);
	
	int Fac=fac(x);
	
	printf("Factorial = %d",Fac);
}