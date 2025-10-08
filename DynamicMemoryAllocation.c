//All the 4 functions of dynamic memory allocation: malloc, calloc, realloc, free
#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,*ptr1,*ptr2,i;
	
	printf("Enter the number of memory blocks you want: ");
	scanf("%d",&n);
	
	//Malloc(Heap or entire unit of memory)
	ptr1=(int *)malloc(n*sizeof(int));
	
	printf("Enter the elements for malloc: ");
	for(i=0; i<n; i++)
		scanf("%d",(ptr1+i));
	
	printf("\nThe memory created by malloc contains:");
	for(i=0; i<n; i++)
		printf("%d ",*(ptr1+i));
		
	//Calloc(creates contigeuous blocks of memory)
	ptr2=(int *)calloc(n,sizeof(int));
	
	printf("\n\nEnter the elements for calloc: ");
	for(i=0; i<n; i++)
		scanf("%d",(ptr2+i));
	
	printf("\nThe memory created by calloc contains:");
	for(i=0; i<n; i++)
		printf("%d ",*(ptr2+i));
	
	//Realloc(rewrite size of memory created by malloc/calloc)
	//Its syntax remains same for both malloc and calloc
	
	printf("\n\nEnter the new number of memory blocks you want: ");
	scanf("%d",&n);
	
	//You can either create new pointer or overwrite same one
	
	//For malloc:
	ptr1=(int *)realloc(ptr1,n*sizeof(int));
	//Store values again using same logic
	
	//For calloc:
	ptr2=(int *)realloc(ptr2,n*sizeof(int));
	//Store values again using same logic
	
	
	/*  Free() function: Used to deallocate memory created by
						malloc/calloc/realloc  */
	free(ptr1);
	printf("\n\nMemory created by malloc deallocated!");

	free(ptr2);
	printf("\n\nMemory created by calloc deallocated!");
	return 0;						
}

