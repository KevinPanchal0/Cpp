#include<iostream>
using namespace std;

class P{
	public :
		double temp_c;
		double temp_f;
		double temp_k;
		
		void input(){
			cout<<"degree celsius temperature: ";
			cin>>temp_c;
		}
};

class Q:public P{
	public :
		P p;
		
		
		void toFehrenheit(){
			p.temp_f = (temp_c * 9.0/5.0)+ 32.0;
			cout<<"celsius into Fehrenheit: "<<p.temp_f<<endl;
		}
};




class R:public Q{
	public :
	
	void toKelvin(){
		R r;
		
		r.temp_k = (temp_c - 32.0)*5.0/9.0+273.15;
		cout<<"Fehrenheit into Kelvin: "<<r.temp_k<<endl;
	}
};

int main(){
	R r;
	
	r.P::input();
	r.Q::toFehrenheit();
	r.R::toKelvin();
	return 0;
}
