//Array Operations
#include<stdio.h>

int main(){
	int a[6]={5,7,4,3,8},i,j,pos,Ele,temp;
	
	//Traverse through an array
	printf("Elements of your array are: ");
	for(i=0; i<5; i++){
		printf("%d ",a[i]);
	}
	
	//Insert an element at any position
	printf("\n\nEnter the element you want to insert: ");
	scanf("%d",&Ele);
	
	printf("Enter the index at which you want to insert: ");
	scanf("%d",&pos);

	if(pos<0 && pos>5){
		printf("Invalid position.");
	}	
	
	else{
		for(i=5; i>pos; i--){  //Make sure your array has empty space
			a[i]=a[i-1];		//Then shift values to right side
		}					//Until you reach pos+1 index
	}
	a[pos]=Ele;				//Now there's empty space at index pos
	
	printf("Elements of your array are: ");
	for(i=0; i<6; i++){
		printf("%d ",a[i]);
	}
	
	//Deletion Operation
	printf("\n\nEnter the index at which you want to delete: ");
	scanf("%d",&pos);
	
	j=1;
	for(i=pos; i<6; i++){
		a[i]=a[i+1];
	}
	
	printf("Elements of your array are: ");
	for(i=0; i<5; i++){   //Decrease range from 6 to 5 because delete
		printf("%d ",a[i]);
	}
	
	//Linear Search
	int search,flag=0;
	
	printf("\n\nEnter the element you want to search: ");
	scanf("%d",&search);
	
	for(i=0; i<5; i++){
		if(a[i]==search){
			pos=i;
			flag++;
			break;
		}	
	}
	
	if(flag==1)
		printf("\nElement found at index %d in the array.",pos);
	else
		printf("\nElement not found in the array.");
		
	//Binary Search
	//First we sort using bubble sort
	printf("\n\n\nElements of your array before sorting are: ");
	for(i=0; i<5; i++){
		printf("%d ",a[i]);
	}
	
	int n=5;
	
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nElements of your array after sorting are: ");
	for(i=0; i<5; i++){
		printf("%d ",a[i]);
	}
	
	//Now apply binary search
	printf("\nEnter the element you want to search: ");
	scanf("%d",&search);
	
	int low=0,high=n-1;
	flag=0;
	
	while(low<=high){
		int mid=(low+high)/2;
		
		if(a[mid]==search){
			printf("Element found in array.",mid);
			flag++;
			break;
		}
		
		else if(search<a[mid])
			high=mid-1;
			//Now array size decreased from n-1 to middle index - 1
		
		else if(search>a[mid])
			low=mid+1;
			//Now starting position to check changed from mid+1 to n-1
			
		//Loop will again run, mid will change due to low/high changing
		//Until we find element as a[mid] and flag also increments
	}
	
	if(flag==0)
		printf("Element not found."); //Flag never change if not found
}
