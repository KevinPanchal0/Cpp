#include<iostream>
#include<stdlib.h>
using namespace std;
class Bank{
	public :
		char c;
		string name;
		int acc_no;
		double no;
		string email;
		char op;
		
		void Dipost(){
			int Money = 200000;
			int d_amt;
			cout<<"Enter the Amount You want to Deposit: ";
			cin>>d_amt;
			
				cout<<"Your Actual Amount Is : "<<Money<<endl;
				
				cout<<"congrats Your Amount has Transfer Sucessfully."<<endl;
				
				cout<<"Your Account Balance Is :"<<Money+d_amt<<endl;
		}
		
		void Transfer(){
			int Money = 200000;
			int t_amt;
			cout<<"Enter the Amount You want to transfer: ";
			cin>>t_amt;
			
			if(t_amt>Money){
				cout<<"Insufficent Amount";
			}
			else{
				cout<<"Your Actual Amount Is : "<<Money<<endl;
				
				cout<<"congrats Your Amount has Transfer Sucessfully."<<endl;
				
				cout<<"Your Account Balance Is :"<<Money-t_amt<<endl;
			}
			
		}
		
		void Withdraw(){
			int Money = 200000;
			int Wdraw_Amount;
			
			cout<<"Enter the Amount You Withdraw: ";
			cin>>Wdraw_Amount;
			
			if(Wdraw_Amount>Money){
				cout<<"Insufficent Amount";
			}
			else{
				cout<<"Your Actual Amount Is : "<<Money<<endl;
				
				cout<<"congrats Your Amount has Withdraw Sucessfully."<<endl;
				
				cout<<"Your Account Balance Is :"<<Money-Wdraw_Amount<<endl;
			}
			
		}
		void Wlc(){
			cout<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t\t  - : BANK MANAGMENT SYSTEM : -"<<endl;
			cout<<"\t\t\t\t\t\t- -------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t- - : Designed N Programed By : -"<<endl;
			cout<<"\t\t\t\t\t\t- -------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t    - - : Kevin Panchl : -"<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t\t- 	- : Trainer : -"<<endl;
			cout<<"\t\t\t\t\t\t -------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t	  Nency Patel"<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t\tPress Any Key N Enter To Continue...";			
		}
		
		void login(){
			cin>>c;
			if(c!='\0'){
				system("CLS");
				cout<<"\t\t\t\t  -----------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t - : Press A to Log in as Adminstrator Or S to log in as STAFF : -"<<endl;
				cout<<"\t\t\t\t  -----------------------------------------------------------"<<endl;
				
				cin>>c;
				switch(c){
					case 'A' :
						system("CLS");
						cout<<"afsefef";
						break;
						
					case 'S' :
						system("CLS");
						system("CLS");
						cout<<"\t\t\t\t  -------------------------------------------"<<endl;
						cout<<"\t\t\t\t\t - : Welcome as STAFF : -"<<endl;
						cout<<"\t\t\t\t  -------------------------------------------"<<endl;
						cout<<"\t\t\t\tEnter the Name Of Staff\t\t\t: ";
						cin>>name;
						cout<<"\t\t\t\tEnter the Account Number of Staff\t: ";
						cin>>acc_no;
						cout<<"\t\t\t\tEnter the Phone Number of Staff\t\t: ";
						cin>>no;
						cout<<"\t\t\t\tEnter the E-mail of Staff\t\t: ";
						cin>>email;
						
						system("CLS");
						cout<<"-------------------------------------------"<<endl;
						cout<<"Name\t\t\t\t: "<<name<<endl;
						cout<<"Account No.\t\t\t: "<<acc_no<<endl;
						cout<<"Phone No.\t\t\t: "<<no<<endl;
						cout<<"E-mail\t\t\t\t: "<<email<<endl;
						cout<<"-------------------------------------------"<<endl;
						cout<<"\t\t\t\t Press [1] to Diposite the Money: "<<endl;
						cout<<"\t\t\t\t Press [2] to Transfer the Money: "<<endl;
						cout<<"\t\t\t\t Press [3] to Withdraw the Money: "<<endl;
						cin>>op;
						switch(op){
							case '1' :
								system("CLS");
								Dipost();
								break;
							
							case '2' :
								system("CLS");
								Transfer();
								break;
								
							case '3' :
								system("CLS");
								Withdraw();
								break;
							default :
								cout<<"You Did not use correct Keyword.";
								cout<<endl<<"Session Time Out";
						}
						break;
					default :
								cout<<"You Did not use correct Keyword.";
								cout<<endl<<"Session Time Out";	
				}
			}
		}
};
int main(){
	Bank b;
	
	b.Wlc();
	b.login();
	return 0;	
}
