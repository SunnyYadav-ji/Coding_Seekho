#include<stdio.h>
//Count vowel in a string
int main(){
	    char str[20];
	      printf("Enter a word:");
	      scanf("%s",str);
	      
	      int vowel=0;
	      for(int i=0;i<sizeof(str);i++){
	      	if(str[i]=='a' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='e' || str[i]=='A' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='E'){
	      		
	      		vowel++;
			  }
	      	
		  }
	     printf("Vowel = %d",vowel); 

}