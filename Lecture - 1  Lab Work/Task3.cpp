#include<iostream>
using namespace std;
int main(){
	int i;
	
	cout<<"the leap year between 2020 to 3030 are: "<<endl;
	
	for(i=2020;i<=3030;i++){
		if(i%100==0 || i%4==0 || i%400==0 ){
			cout<<i<<" ";
		}
	}
	
	return 0;
}
