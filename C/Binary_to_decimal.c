#include<stdio.h>
#include<math.h>
int main(){
	int b;
	printf("Enter a number:");
	scanf("%d",&b);
	int s=0;
	int n=b;
	int r;
	int c=0;
	while(n>0){
	    r=n%10;
		n=n/(10);
        s=s+(r*(pow(2,c)));
		c=c+1;
        
	}
	printf("The demcimal number:%d",s);
}
