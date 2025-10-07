//Stack Operations using array(static implementation)
#include<stdio.h>
int main(){
	int a[5]={2,4,5,3},top=3,i,size=5;
	
	//Push Operation 
	int New;
	
	printf("Enter the element you want to push: ");
	scanf("%d",&New);
	
	if(top==size-1){ //size=5 meaning if full then a[4]or a[top]=filled
		printf("\nStack overflow!");
	}
	else{
		top++;
		a[top]=New;
	}
	printf("\nAll the elements of stack after push are: ");
		for(int temp=top; temp!=-1; temp--){
			printf("%d ",a[temp]);
		}
	
	//Pop operation to remove top element of stack
	if(top==-1)
		printf("\nStack Underflow!");
	else{
		printf("\n%d has been removed from the stack.",a[top]);
		top--;
	}
	
	//Peek(print topmost element of array)
	if(top==-1)
		printf("\nStack Underflow!");
	else{
		printf("\nTopmost element of stack is %d.",a[top]);
	}
	
	//Display All Elements
	int temp=top;
	if(top==-1)
		printf("\nStack Underflow!");
	else{
		printf("\nAll the elements of stack are: ");
		for(int temp=top; temp!=-1; temp--){
			printf("%d ",a[temp]);
		}
	}
	return 0;
}
