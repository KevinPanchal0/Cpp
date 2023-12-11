#include<iostream>
using namespace std;
class car{
	public: 
	int car_id;
	char car_company_name[20];
	char car_color[15];
	char car_model[15];
	int car_release_year;
};
int  main(){
	
	int i;
	car cars[4];
	for(i=1;i<=4;i++){
		
		cout<<"Enter the car id: ";
		cin>>cars[i].car_id;
		cout<<"Enter the car company name: ";
		cin>>cars[i].car_company_name;
		cout<<"Enter the car color: ";
		cin>>cars[i].car_color;
		cout<<"Enter the car model: ";
		cin>>cars[i].car_model;
		cout<<"Enter the car realese year: ";
		cin>>cars[i].car_release_year;
		cout<<endl<<endl;
	}
	for(i=1;i<=4;i++){
		cout<<"The car id: "<<cars[i].car_id<<endl;
		cout<<"The car campany name: "<<cars[i].car_company_name<<endl;
		cout<<"The car color: "<<cars[i].car_color<<endl;
		cout<<"The car model: "<<cars[i].car_model<<endl;
		cout<<"The car release year: "<<cars[i].car_release_year<<endl;
		cout<<endl<<endl;
	}
	
	return 0;
}
