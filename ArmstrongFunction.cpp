#include <iostream>
using namespace std;

int armstrong(int n);

int main()
{
    int n,f;
    
    cout<<"Enter a number: ";
    cin>>n;
    
    f=armstrong(n);
    
    if(f==1)
        cout<<"Number is armstrong.";
    else
        cout<<"Number is armstrong.";
    
    return 0;
}

int armstrong(int n){
    int temp,digits=0,digits2,i,result=0;
    
    temp=n;
    
    while(n!=0){
        n=n/10;
        digits++;
    }
    
    n=temp;
    digits2=digits;
    
    for(i=1; i<=digits; i++){
        int j=1;
        while(digits2!=0){
            j=j*n;
            digits2--;
        }
        digits2=digits;
        result=result+j;
        n=n/10;
    }
    
    n=temp;
    
    if(result==n)
        return 1;
    else
        return 0;
}
