#include<iostream>
using namespace std;
class Students{
	private: 
		int stu_id;
		char stu_name[20];
		int stu_age;
		char stu_course[20];
		char stu_email[10];
 		char stu_city[15];
 		char stu_college[10];
 	
 	public: 
 	int  studentsInput(){
 		cout<<"Enter the Student Id: ";
 		cin>>stu_id;
 		cout<<"Enter the Student Name: ";
 		cin>>stu_name;
 		cout<<"Enter the Student Age: ";
 		cin>>stu_age;
 		cout<<"Enter the Student Course: ";
 		cin>>stu_course;
 		cout<<"Enter the Student Email: ";
 		cin>>stu_email;
 		cout<<"Enter the Student City: ";
 		cin>>stu_city;
 		cout<<"Enter the Student College: ";
 		cin>>stu_college;
 		
	 }
	 
	int studentsDisplay(){
		cout<<"Student Id: "<<stu_id<<endl;
		cout<<"Student Name: "<<stu_name<<endl;
		cout<<"Student Age: "<<stu_age<<endl;
		cout<<"Student Course: "<<stu_course<<endl;
		cout<<"Student Email: "<<stu_email<<endl;
		cout<<"Student City: "<<stu_city<<endl;
		cout<<"Student College: "<<stu_college<<endl;
	}
 		
};

int main(){
	int i;
	Students stud[5];
	for(i=1;i<=1;i++){
		stud[i].studentsInput();
	}
	for(i=1;i<=1;i++){
		stud[i].studentsDisplay();
	}
	return 0;
}
