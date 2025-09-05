//Check if a string or a number is palindrome
#include<iostream>
using namespace std;

int main(){
	int choice,n,rev=0,digits=0,temp,k;
	char str[10],reverse[10];
	
	cout<<"Check palindrome."<<endl;
	cout<<"Input 1 for number."<<endl;
	cout<<"Input 2 for string."<<endl<<endl;
	cout<<"Enter choice: ";
	cin>>choice;
	cout<<endl;
	
	if(choice==1){
		cout<<"Enter a number: ";
		cin>>n;
		
		temp=n;
		while(n!=0){
			n=n/10;
			digits++;
		}
		
		int digits2;
		digits2=digits;
		n=temp;
		int mul=1;
		
		while(digits2!=1){
			mul=mul*10;
			digits2--;       
		}

		while(n!=0){
			k=n%10;
			rev=rev+k*mul;
			mul=mul/10;
			n=n/10;
		}
		n=temp;
		if(rev==n){
			cout<<"Number is palindrome.";
		}
		else{
			cout<<"Number is not palindrome.";
		}
		
	}
	else if(choice==2){
		int i=0,chars1=0,chars2=0;
		char str1[20];
		
		cout<<"Enter a string: ";
		cin>>str;
		
		while(str[i]!='\0'){
			chars1++;
			i++;
		}
		
		i=0;
		chars2=chars1;
		chars2--;
		while(i!=chars1){
			str1[i]=str[chars2-i];
			i++;
		}
		chars2=chars1;
		i=0;
		int flag=0;
		
		while(i!=chars1){        
			if(str[i]==str1[i]){  
									   
				flag=1;
			}
			else{
				flag=0;
			}
			i++;	
		}
		
		if(flag==1){
			cout<<"String is palindrome.";
		}
		else{
			cout<<"String is not palindrome.";
		}	
	}
	else{
		cout<<"Invalid Choice!";
	}
}
