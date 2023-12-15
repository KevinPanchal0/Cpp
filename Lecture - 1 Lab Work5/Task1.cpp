#include<iostream>
using namespace std;

class companies{
	private	:
		int comp_id;
    std::string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    std::string comp_ceo;
		
	public :
		companies() :
			comp_id(0), comp_staff_quantity(0),
          comp_revenue(0), comp_import_raw_diamonds(0),
          comp_export_diamonds(0){}
          
          
		 companies(int id, const std::string& name, int staffQuantity, double revenue,
                   int importRawDiamonds, int exportDiamonds, const std::string& ceo)
        : comp_id(id), comp_name(name), comp_staff_quantity(staffQuantity),
          comp_revenue(revenue), comp_import_raw_diamonds(importRawDiamonds),
          comp_export_diamonds(exportDiamonds), comp_ceo(ceo) {}
          
    void display() const{
    	cout << "Company ID: " << comp_id << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Staff Quantity: " << comp_staff_quantity << endl;
        cout << "Revenue (per year): $" << comp_revenue << endl;
        cout << "Imported Raw Diamonds (per year): " << comp_import_raw_diamonds << endl;
        cout << "Exported Diamonds (per year): " << comp_export_diamonds << endl;
        cout << "CEO: " << comp_ceo << endl;
        cout << "------------------------" << endl;
	}
};
	
		
		
int main(){
	int n;
	
	cout<<"Enter the no. of Companies: ";
	cin>>n;
	companies* c = new companies[n];

	for(int i=0;i<n;i++){
		int id;
	string name;
	int qua;
	int revenue;
	int import;
	int exportt;
	string ceo;
			cout<<"Enter the Company id: ";
			cin>>id;
			cout<<"Enter the Company Name: ";
			cin>>name;
			cout<<"Enter the Company Staff: ";
			cin>>qua;
			cout<<"Enter the Company revenue: ";
			cin>>revenue;
			cout<<"Enter the no. of raw diamonds imported per year): ";
			cin>>import;
			cout<<"Enter the no. of diamonds exported per year: ";
			cin>>exportt;
			cout<<"Enter the name of CEO of the company: ";
			cin>>ceo;
			c[i] = companies(id, name, qua, revenue, import, exportt, ceo);
		cout<<endl;
}
	
	cout<<"Printing The Details of Company As Mentioned: \n";
for(int i=0;i<n;i++){
		c[i].display();
		cout<<endl;
	}
	
	return 0;
}
