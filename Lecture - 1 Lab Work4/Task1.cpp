#include<iostream>
using namespace std;
class staticInformation{
	private: 
		int hotel_id;
		char hotel_name[20];
		char hotel_type[10];
		int hotel_rating;
		char hotel_location[20];
		int hotel_establish_year;
		int hotel_staff_quantity;
		int hotel_room_quantity;
		
	public: 
		void staticInformationInput(){
			cout<<"Enter the hotel Id: ";
			cin>>hotel_id;
			cout<<"Enter the hotel Name: ";
			cin>>hotel_name;
			cout<<"Enter the hotel Type(hotel or motel): ";
			cin>>hotel_type;
			cout<<"Enter the hotel rating: ";
			cin>>hotel_rating;
			cout<<"Enter the hotel location: ";
			cin>>hotel_location;
			cout<<"Enter the hotel establish year: ";
			cin>>hotel_establish_year;
			cout<<"Enter the hotel staff quantity: ";
			cin>>hotel_staff_quantity;
			cout<<"Enter the hotel room quantity: ";
			cin>>hotel_room_quantity;
		}
		
		void staticInformationDisplay(){
		cout<<"hotel Id: "<<hotel_id<<endl;
		cout<<"hotel Name: "<<hotel_name<<endl;
		cout<<"hotel Type: "<<hotel_type<<endl;
		cout<<"hotel rating: "<<hotel_rating<<endl;
		cout<<"hotel location: "<<hotel_location<<endl;
		cout<<"hotel establish year: "<<hotel_establish_year<<endl;
		cout<<"hotel staff quantity: "<<hotel_staff_quantity<<endl;
		cout<<"hotel room quantity: "<<hotel_room_quantity<<endl;
		}
};

int main(){
	int i,n;
	cout<<"Enter numbers of Hotels: ";
	cin>>n;
	staticInformation info[n];
	cout<<endl;
	for(i=1;i<=n;i++){
		info[i].staticInformationInput();
		cout<<endl;
	}
	cout<<endl<<"Printing All "<<n<<" Hotels Details: "<<endl;
	for(i=1;i<=n;i++){
		info[i].staticInformationDisplay();
		cout<<endl;
	}
	return 0;
}
