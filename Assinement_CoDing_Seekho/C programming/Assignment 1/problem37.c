#include<stdio.h>

int main(){
	int i=1;
	while(i){
		int n,a,b;
		printf("Choice=");
		scanf("%d",&n);
		
		
		switch (n){
			case 1:
				scanf("%d%d",&a,&b);
				printf("Result =%d\n",a+b);
			 break;	
			 
			case 2:
				scanf("%d%d",&a,&b);
				printf("Result =%d\n",a-b);
			 break;
			 
			case 3:
				scanf("%d%d",&a,&b);
				printf("Result =%d\n",a*b);
			 break;
			 
			case 4:
			     printf("Goodbye !");
			  i--;
			  			
		}
		
		
	}
	
}