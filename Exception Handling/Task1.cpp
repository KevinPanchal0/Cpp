#include<iostream>
using namespace std;

int  main(){
	int a,b;
	try{
		cout<<"Enter the value of A: ";
		cin>>a;
		cout<<"Enter the value of B: ";
		cin>>b;
		
		if(b==0){
			throw (b);
		}
		else{
			int ans=a/b;
			cout<<ans;
		}
	}
	
	catch (int p){
		cout<<"a number cannot be divide by zero";
	}
	return 0;
}
