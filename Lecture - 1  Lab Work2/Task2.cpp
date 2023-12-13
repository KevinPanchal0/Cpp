#include<iostream>
using namespace std;
class Employee{
	public: 
	char name[20];
	int year;
	char Address[20];
};
int  main(){
	
	int i;
	Employee Employeee[3];
	for(i=1;i<=3;i++){
		
		cout<<"Enter Name: ";
		cin>>Employeee[i].name;
		cout<<"Enter the Year: ";
		cin>>Employeee[i].year;
		cout<<"Enter the Add.: ";
		cin>>Employeee[i].Address;
		cout<<endl<<endl;
	}
	cout<<"Name  "<<"  Year"<<"  Address"<<endl;
	for(i=1;i<=3;i++){
		cout<<Employeee[i].name<<" "<<Employeee[i].year<<" "<<Employeee[i].Address;
		cout<<endl<<endl;
	}
	
	return 0;
}
