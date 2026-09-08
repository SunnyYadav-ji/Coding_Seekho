#include<stdio.h>
//calculator using switch
int main(){
	    char ch;
	     int n1,n2,result;
	     printf("Enter two numbers with their operator:");
	     scanf("%d%c%d",&n1,&ch,&n2);
	     
switch(ch)	
	{
		case '+':
			{
			result=n1+n2;	
			printf("Result = %d",result);	
			break;	
			}
		case '-':
			{
				if(n1>n2){
				result=n1-n2;
			}
			else{
				result=n2-n1;
			}
			printf("Result = %d",result);
				
				
			break;	
			}
		case '*':
			{
			result=n1*n2;	
			printf("Result = %d",result);	
				
				
			break;	
			}
		case '/':
			{
				if(n2==0){
					printf("Error:Division by zero");
					break;
				}
				result=n1/n2;	
			printf("Result = %d",result);
				break;		
			}
		 default: {
			  printf("Error:this operator is not define");
			break;
		}	
		
		
	}
	
	
}