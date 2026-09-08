#include<stdio.h>
#include<string.h>

int main(){
	char s[50];
	printf("Enter a string :");
	fgets(s,50,stdin);
//	
	
	int i=0,j=strlen(s),len=strlen(s);
	while(i<=j){
		char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
		i++;
		j--;
	}
	
	for(int i=0;i<=len;i++){
		printf("%c",s[i]);
			
	}
	
	
	
  return 0;	
}