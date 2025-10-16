#include<stdio.h>
int main(){
	int a=0,b=1,c,i,n;
	
	printf("Enter number of terms for fibonacci series: ");
	scanf("%d",&n);
	
	printf("Fibonacci Series: ");
	for(i=1; i<=n; i++){
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}
