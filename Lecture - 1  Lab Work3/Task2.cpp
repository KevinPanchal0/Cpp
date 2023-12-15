#include <iostream>
#include <string>

using namespace std;

class Customer {
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_telecom_brand_name;
    string cust_mobile_number;
    string cust_city;
    int cust_simcard_validity;

public:
    void inputCustomerDetails() {
        cout << "Enter Customer ID: ";
        cin >> cust_id;

        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, cust_name);

        cout << "Enter Customer Age: ";
        cin >> cust_age;

        cout << "Enter Telecom Brand Name: ";
        cin >> cust_telecom_brand_name;

        cout << "Enter Customer Mobile Number: ";
        cin >> cust_mobile_number;

        cout << "Enter Customer City: ";
        cin >> cust_city;

        cout << "Enter Sim Card Validity (in years): ";
        cin >> cust_simcard_validity;
    }





    void displayCustomerDetails(){
        cout << "Customer ID: " << cust_id << endl;
        cout << "Customer Name: " << cust_name << endl;
        cout << "Customer Age: " << cust_age << endl;
        cout << "Telecom Brand Name: " << cust_telecom_brand_name << endl;
        cout << "Mobile Number: " << cust_mobile_number << endl;
        cout << "City: " << cust_city << endl;
        cout << "Sim Card Validity (in years): " << cust_simcard_validity << endl;
        cout << "-----------------------------------------" << endl;
    }
};

int main() {
    int i;
    Customer customers[5];

    for (int i = 1; i <= 1; ++i) {
        cout << "Enter information for Customer "<< endl;
        customers[i].inputCustomerDetails();
        cout << endl;
    }

    cout << "Customer Information for all customers:" << endl;
    for (i=1;i<=1;i++) {
        customers[i].displayCustomerDetails();
    }

    return 0;
}
