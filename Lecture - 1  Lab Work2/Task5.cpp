#include<iostream>
using namespace std;

class Area{
	public: 
	int length,breath;
	
	int returnArea(){
		return length*breath;
	}
};

int main(){
	Area a;
	
	cout<<"Enter the Length of Reactangle: ";
	cin>>a.length;
	cout<<"Enter the Breath of Reactangle: ";
	cin>>a.breath;
	
	cout<<"The Area of Reactangle "<<a.returnArea();
	
	return 0;
}
