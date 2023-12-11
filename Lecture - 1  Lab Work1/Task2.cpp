#include<iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int a;
	int b,c;
	do{		cout<<"Enter according to below list: "<<endl;
			cout<<"Enter 1 for addition "<<endl;
			cout<<"Enter 2 for Substraction "<<endl;
			cout<<"Enter 3 for Multiplication "<<endl;
			cout<<"Enter 4 for Division "<<endl;
			cout<<"Enter 5 for Module "<<endl;
			cout<<"Enter 6 for exit"<<endl;
			cout<<"Enter 7 for clear"<<endl;
	cin>>a;
		switch(a){
		case 1 :
			cout<<"Enter the value of A: ";
			cin>>b;
			cout<<"Enter the value of B: ";
			cin>>c;
			cout<<b+c<<endl;
			break;
		case 2 :
			cout<<"Enter the value of A: ";
			cin>>b;
			cout<<"Enter the value of B: ";
			cin>>c;
			cout<< b-c<<endl;
			break;
		case 3 :
			cout<<"Enter the value of A: ";
			cin>>b;
			cout<<"Enter the value of B: ";
			cin>>c;
			cout<< b*c<<endl;
			break;
		case 4 :
			cout<<"Enter the value of A: ";
			cin>>b;
			cout<<"Enter the value of B: ";
			cin>>c;
			cout<< b/c<<endl;
			break;
		case 5 :
			cout<<"Enter the value of A: ";
			cin>>b;
			cout<<"Enter the value of B: ";
			cin>>c;
			cout<< b%c<<endl;
			break;
			
		case 7 :
			system ("CLS");
			break;		
	}
	} while(a!=6);
	return 0;
}
