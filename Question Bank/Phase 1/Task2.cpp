#include<iostream>
using namespace std;
class Even{
	public :
		int n;
		int total=0;
	void evenAvg(){
		for(int i=1;i<=n;i++){
				if(i%2==0){
				total=i+total;
			}
		}
	int avg = total/n;
		cout<<avg;
	}
};

int main(){
	Even e;
	
	cout<<"Enter N1: ";
	cin>>e.n;
	e.evenAvg();
	return 0;
}
