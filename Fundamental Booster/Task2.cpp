#include<iostream>
using namespace std;

int main()
{
	int r;
	const float pie=3.14;
	float area,circumference;
	
	cout<<"Enter the radius of circle: ";
	cin>>r;
	
	area=pie*r*r;
	
	cout<<"Area of Circle is "<<area<<endl;
	
	circumference=2*pie*r;
	
	cout<<"circumference of Circle is "<<circumference<<endl;
	
	return 0;
}
