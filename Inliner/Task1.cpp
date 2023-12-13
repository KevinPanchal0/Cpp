#include<iostream>
using namespace std;
class student{
	public: 
	
	int roll;
	int phone_number;
	char add[30];
};
int main(){
	
	student sam;
	student john;
	
	cout<<"Enter the details of sam: "<<endl;
	cout<<"Enter roll no: ";
	cin>>sam.roll;
	cout<<"Enter the phone no. ";
	cin>>sam.phone_number;
	cout<<"enter the add. ";
	cin>>sam.add;
	
	cout<<endl;
	
	cout<<"Enter the details of john: "<<endl;
	cout<<"Enter roll no: ";
	cin>>john.roll;
	cout<<"Enter the phone no. ";
	cin>>john.phone_number;
	cout<<"enter the add. ";
	cin>>john.add;
	
	cout<<endl;
	cout<<"details of sam: "<<endl;
	cout<<"Roll No.: "<<sam.roll<<endl;
	cout<<"Number: "<<sam.phone_number<<endl;
	cout<<"Address No.: "<<sam.add<<endl;
	
	cout<<endl;
	cout<<"details of John: "<<endl;
	cout<<"Roll No.: "<<john.roll<<endl;
	cout<<"Number: "<<john.phone_number<<endl;
	cout<<"Address No.: "<<john.add<<endl;
	return 0;
}
