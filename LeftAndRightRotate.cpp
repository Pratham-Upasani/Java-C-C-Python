//Left rotate and Right rotate as many times as you want!
#include<stdio.h>
int main(){
	int a[5]={2,3,4,5,6},temp,i,n=5;
	int l,r;
	
	printf("Enter how many left rotations you want: ");
	scanf("%d",&l);
	
	printf("Array before left rotate: ");
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	//Left rotation l times
	
	int j;
	for(j=0; j<l; j++){
		temp=a[0];
		for(i=0; i<n; i++){
			a[i]=a[i+1];
		}
		a[n-1]=temp;
	}
	
	
	printf("\nArray after left rotating %d times: ",l);
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}

	//Right rotation r times

	printf("\n\n\nEnter how many right rotations you want: ");
	scanf("%d",&r);
	
	for(j=0; j<r; j++){
		temp=a[n-1];
		for(i=n-1; i>0; i--){
			a[i]=a[i-1];
		}
		a[0]=temp;
	}
	
	printf("\nArray after right rotating %d times: ",r);
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	return 0;
}

