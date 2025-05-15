#include <iostream>

using namespace std;

//base class
class Employee{
	public:
	int id;
		Employee(){}
		float salary;
		Employee(int inp){
			id = inp;
			salary = 34.0;
		};
};

//Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
  {
	members/methods/etc...
  }

Note:
1) Default visibility mode is private
2) Public Visibility Mode: Public member of the base class becomes public in derived class
3) Private Visibilty Mode: Public member of the base class becomes private in derived class
4) Private member of base class are never inherited 
*/



// Creating a derived class named Programmer from Employee
class Programmer : Employee{
	public: 
	Programmer(int inpId){
		id = inpId;
	};
	int languageCode = 9;
	void getData(){
		cout<<"id = "<<id<<endl;
	};
};

int main(){
	Employee aatib(1), moiz(2);
	cout<<"aatib.salary: "<<aatib.salary<<endl;
	cout<<"moiz.salary: "<<moiz.salary<<endl;

	Programmer skillF(10);
	cout<<"skillF.languageCode: "<<skillF.languageCode<<endl;
	skillF.getData();
	return 0;
}
