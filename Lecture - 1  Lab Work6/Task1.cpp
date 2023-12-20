#include<iostream>
using namespace std;
class X{
	public :
		int a,b,c;
		int acube,bcube,ccube;
};

class Y:public X{
	public :
		X y;
	void getData(){
		cout<<"Enter the Value of A: ";
		cin>>y.a;
		cout<<"Enter the value of B: ";
		cin>>y.b;
		cout<<"Enter the value of C: ";
		cin>>y.c;
	}
	
	void setData(){
		y.acube=y.a*y.a*y.a;
		y.bcube=y.b*y.b*y.b;
		y.ccube=y.c*y.c*y.c;
		
		cout<<"Cube of A = "<<y.acube<<endl;
		cout<<"Cube of B = "<<y.bcube<<endl;
		cout<<"Cube of C = "<<y.ccube;
	}
};

int main(){
	X x;
	Y y;
	
	y.getData();
	y.setData();
}
