#include<iostream>
using namespace std;

int main(){

// FOR LOOP!
// PROGRAM #01
int n;
cout<<"Enter Number limit: "<<endl;
cin>>n;
int n2 = n;
//
for(int i=0; i<n; i++){
	cout<<"Current: "<<i;
	cout<<endl;
}

// FIBONACCI SERIES !!
// 0,1,1,2,3,5,8

int a = 0;
int b = 1;
int c = a+b;
for(int i=0;i<n2;i++){
	cout<<a<<", ";
	a = b;
	b = c;
	c = a+b;
}


// PROGRAM SUM PRODUCT!
int digit = n%10;
int sum = 0;
int product = 1;
for(int i=0; n>0; i++){
	sum += digit;
	product *= digit;
    n /=10;
    digit = n%10;	
}
cout<<"SUM: "<<sum<<endl;
cout<<"Product: "<<product<<endl;
cout<<"Subtract: "<<product-sum;

// NUMBER OF BITS!
int count = 0;
while(n2!=0){
	if(n2&1){
		count++;
	}
	n2>>=1;
}
cout<<endl;
cout<<"Number of 1 bits: "<<count;

return 0;
}

