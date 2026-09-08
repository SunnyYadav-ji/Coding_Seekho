#include<stdio.h>
#include<string.h>

int main(){
	
  char s[100];
  printf("Enter a sentence: ");
  fgets(s, 50, stdin);
 
// Reads input until newline..

  int count=1;
  int len = strlen(s);
  for(int i=0;i<len;i++){
   
  if(s[i]==32){
   
   count++;
  }
  }
	
	printf("You entered: %d",count);
	
 return 0;	
}