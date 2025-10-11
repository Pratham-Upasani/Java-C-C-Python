//Test
#include<stdio.h>
int main(){
	int a[5]={5,6,4,7,3},i,min=0,max=0,min2=0,max2=0,n=5;
	
	for(i=0; i<5; i++){
		if(a[i]<a[min])
			min=i;
	}
	
	for(i=0; i<5; i++){
		if(a[i]>=a[max])
			max=i;
	}
	
	printf("Elements of array: ");
	for(i=0; i<5; i++)
		printf("%d ",a[i]);
	
	printf("\nMin element = %d",a[min]);
	printf("\nMax element = %d",a[max]);
	
	for(i=0; i<5; i++){
		if(a[i]<a[max] && a[i]>a[max2]){
			max2=i;
		}
	}
	
	for(i=0; i<5; i++){
		if(a[i]>a[min] && a[i]<a[min2]){
			min2=i;
		}
	}
	
	printf("\nMin2 element = %d",a[min2]);
	printf("\nMax2 element = %d",a[max2]);
	
}
