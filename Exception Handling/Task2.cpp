#include<iostream>
using namespace std;

int  main(){
	int age;
	try{
		cout<<"Enter the age: ";
		cin>>age;
		if(age<18){
			throw (age);
		}
		else{
			cout<<"you can be able to vote, your age is more than 18";
		}
	}
	
	catch (int p){
		cout<<"a person cannot be able to vote if his/her age is lessthan 18";
	}
	return 0;
}
