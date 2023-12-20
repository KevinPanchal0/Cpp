#include<iostream>
#include<string>
using namespace std;
class Staff{
	public :
	string name;
	int pass;
	string n;
	int p;
	
	
	void VerfyCheck(){
	name = {"Kevin"};
	pass=1234;
			cout<<"Enter the Name: ";
	cin>>n;
	
	if(name==n){
		cout<<"Enter the password: ";
		cin>>p;
		if(pass==p){
			cout<<"Log In Success"<<endl;
			
		}
		else{
			cout<<"Incorrect Password";
		}
	}
	
	else{
		cout<<"UserName Incorrect"<<endl;
	}
	}
	
//	Declaring The List variable
	int item_no;
	string item_name;
	int item_quantity; 
	int price;
	int discount;
	int total;
	void Input(){
		if(pass==p){
			cout<<"Enter the Item No.: ";
			cin>>item_no;
			cout<<"Enter the Item Name: ";
			cin>>item_name;
			cout<<"Enter the Quantity of Item: ";
			cin>>item_quantity;
			cout<<"Enter the Price: ";
			cin>>price;
			cout<<"Enter the Discount: ";
			cin>>discount;
			
			cout<<item_no;
		}
	}
};

int main(){
	Staff v;
	
	v.VerfyCheck();
	v.Input();
}
