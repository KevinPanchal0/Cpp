#include<iostream>
using namespace std;

class Average{
	public: 
	int avg(int a, int b, int c){
		float avg;
		avg=(a+b+c)/3;
		
		return avg;
	}
};

int main(){
		Average a;
		int d,e,f;
		
		cout<<"Enter the value of A: ";
		cin>>d;
		cout<<"Enter the value of B: ";
		cin>>e;
		cout<<"Enter the value of C: ";
		cin>>f;
		
		a.avg(d ,e , f);
		
		cout<<a.avg(d,e,f);
	return 0;
}
