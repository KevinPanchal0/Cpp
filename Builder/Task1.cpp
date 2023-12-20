#include<iostream>
using namespace std;
class Wlc{
	public :
		void wlc(){
			cout<<"Welcome to RnW Railway Portal: "<<endl;
		}
};
class Train{
	public :
		int no;
		string name;
		string source;
		string destination;
		string time;
		
		void trainInput(){
			cout<<"Enter the Train No: ";
			cin>>no;
			
			cout<<"Enter the Train Name: ";
			cin>>name;
			
			cout<<"Enter the Source: ";
			cin>>source;
			
			cout<<"Enter where you want to go: ";
			cin>>destination;
			
			cout<<"At what time: ";
			cin>>time;
			cout<<endl<<endl;
		}
		
		void traindisplay(){
			cout<<"Train No: "<<no<<endl;
			cout<<"Train Name: "<<name<<endl;
			cout<<"Source: "<<source<<endl;
			cout<<"Destination: "<<destination<<endl;
			cout<<"Time: "<<time<<endl;
		
		}
};

int main(){
	Wlc wel;
	wel.wlc();
	Train t[3];
	int no1;
	int trainnumber;	
	for(int i=0;i<3;i++){
		t[i].trainInput();
	}
	
	cout<<"Now tell which train details you want: ";
	cin>>no1;
	int i=0;
	

	while(i<3){
	
		if(t[i].no==no1){
			t[i].traindisplay();
			cout<<endl;
			}
		i++;	
		}
	}

