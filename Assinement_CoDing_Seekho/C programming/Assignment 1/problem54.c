#include<stdio.h>
#include<string.h>

int main(){
	char s[50];
	printf("Enter a string :");
	fgets(s,50,stdin);
	
	
	int len=strlen(s);

	int L=0,D=0,S=0;
	for(int i=0;i<=len;i++){
	if(s[i]==32){
		S++;
	}
	else if(s[i]>=48 && s[i]<=57){
		D++;
	}
	else{
		L++;
	}
			
	}
	
	printf("Letters=%d  Digits=%d Spaces=%d",L,D,S);
	
  return 0;	
}