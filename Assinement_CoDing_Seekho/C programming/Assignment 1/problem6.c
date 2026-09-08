#include <stdio.h>
//Simple Interest Calculator
int main() {
        int p,t,r;
		float Si;
        printf("Enter p,t and r:");
        scanf("%d%d%d",&p,&t,&r);
        Si=(p*t*r)/100;
        printf("SI = %f",Si);


}