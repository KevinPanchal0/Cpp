#include<iostream>
using namespace std;
class Table{
	public :
		int n1,n2;
		
	void multiplicationTable(){
		for(int i=n1;i<=n2;i++){
			for(int j=1;j<=10;j++){
				cout<<i<<"* "<<j<<"= "<<i*j<<endl;
			}
			cout<<endl<<endl;
		}
	}
};

int main(){
	Table t;
	
	cout<<"Enter N1: ";
	cin>>t.n1;
	cout<<"Enter N2: ";
	cin>>t.n2;
	
	t.multiplicationTable();
	return 0;
}
