#include<iostream>
using namespace std;
int main(){
	int n;
	
	cout<<"enter the size of array: ";
	cin>>n;
	
	int a[n];
	int i;
	
	for(i=0;i<n;i++){
		cout<<"Enter the elements: ";
		cin>>a[i];
	}
	
	cout<<"The even no. are: "<<endl;

	for(i=0;i<n;i++){
		if(a[i]%2==0){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
