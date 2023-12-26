#include<iostream>
using namespace std;
int main(){
	int Maths,Phy,Chem;
	
	cout<<"Enter the Marks of Maths: ";
	cin>>Maths;
	cout<<"Enter the Marks of Physics: ";
	cin>>Phy;
	cout<<"Enter the Marks of Chemistry: ";
	cin>>Chem;
	
	if(Maths>80 && Phy>75 && Chem>72){
		cout<<"Grade A \n";
	}
	else if(Maths>=60 || Maths<=80 && Phy>=55 || Phy<=75  && Chem>=50||  Chem<=72){
		cout<<"Grade B \n";
	}
	else if(Maths>=40 || Maths<60 && Phy>=35 || Phy<55  && Chem>=35 ||  Chem<50){
		cout<<"Grade C \n";
	}
	else{
		cout<<"Fail :)";
	}
	return 0;
}
