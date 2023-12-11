#include<iostream>
using namespace std;

int main(){
	int a,b;
	
	cout<<"enter the value of A: ";
	cin>>a;
	
	cout<<"enter the value of B: ";
	cin>>b;
	
	cout<<"\nBefore Swapping\nA = "<<a<<"\nB = "<<b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"\nAfter Swapping\nA = "<<a<<"\nB = "<<b;
	return 0;
}
