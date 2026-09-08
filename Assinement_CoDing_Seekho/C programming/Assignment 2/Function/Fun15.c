#include<stdio.h>
int gcd(int n,int m){
	int temp;
	while(m!=0){
		temp=m;
		m=n%m;
		n=temp;
	}
	
	return n;
	
	
	
	
	
	
//	int largest;
//	if(n>=m){
//		for(int i=1;i<=m;i++){
//			
//       if(n%i==0 && m%i==0){
//   	    largest=i;
//   	     
//         }
//     }
//	}
//	else{
//		for(int i=1;i<=n;i++){
//			
//       if(n%i==0 && m%i==0){
//   	     largest=i;
//   	
//         }
//     }
//		
//	}
//	
//	return largest ;
}

int main(){
	int x,y;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	
	
	int value = gcd(x,y);
	
	printf("GCD = %d",value);
	
}