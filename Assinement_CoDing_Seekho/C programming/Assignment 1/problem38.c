#include<stdio.h>

int main(){
    char str[20] ;
	printf("Enter a word:\n");
	
	
	int upper=0,lower=0,space=0;
	
	for(int i=0;i<20;i++){
		
	scanf("%c",&str[i]);
		
	}
	
	for(int i=0;i<20;i++){
	
	if(str[i]>='A' && str[i]<='Z')
	{
		upper++;
	}
	else if(str[i]>='a' && str[i]<='z')
	{
		lower++;
	}
	else{
		space++;
	}
	
    }
    
	printf("Upper=%d Lower=%d",upper,lower);
	
	
	return 0;
	
	
}