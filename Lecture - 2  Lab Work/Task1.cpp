#include<iostream>
using namespace std;
class RBI{
	public :
		
	double P;
	double R;
	double T;
	double I;
	
	void RBIintrest(){
	cout<<"Enter the Principle Amount: ";
	cin>>P;
	cout<<"Enter the Time Period for which money is lent: ";
	cin<<T;
	
	
	}
	
};

class SBI:public RBI{
	RBI r;
	
	
};

class BOB:public RBI{
	
};

class ICIC:public RBI{
	
};

int main(){
	
	return 0;
}
