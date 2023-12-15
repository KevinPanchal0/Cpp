#include<iostream>
using namespace std;

class Time{
	private :
		int total_seconds;
		
		
	public :
		void timeInput(){
			cout<<"Enter the Seconds: ";
			cin>>total_seconds;
		}
		
		void timeDisplay(){
		int seconds = (total_seconds % 60);
		int minutes = (total_seconds % 3600) / 60;
		int hours = (total_seconds % 86400) / 3600;
		
		cout<<hours<<":"<<minutes<<":"<<seconds;
		}
};
int main(){
	Time t;
	
	t.timeInput();
	t.timeDisplay();
}
