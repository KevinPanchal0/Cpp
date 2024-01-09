#include<iostream>
using namespace std;
int main()
{
	string password;
	try{
		cin>>password;
		int i;
		for(i=0;i<password.length();i++)
		{
			if(password[i]>='A' && password[i]<='Z')
			{
				cout<<"valid password";
				break;
			}
			else{
				throw (password);
			}
		}
		
	}
	catch(string pass)
	{
		cout<<"first char should be upper case";
	}
}
