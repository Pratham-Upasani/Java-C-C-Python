//Swapping without a third variable using functions
#include<iostream>
using namespace std;

void swap(int *,int *);

int main(){
	int a,b,*p,*q;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	cout<<"Values of a and b before swapping are "<<a<<" and "<<b<<endl;
	p=&a;
	q=&b;
	swap(p,q);
	cout<<"Values of a and b after swapping are "<<a<<" and "<<b;
}

void swap(int *p,int *q){
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;	
}
