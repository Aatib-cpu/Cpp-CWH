#include<iostream>

using namespace std;

class Employee{
	int id; //default variables are private
	static int count; //also known as class variable by default zero 
	
	public: 
		void setData(void){
			cout<<"Enter the id: ";
			cin>>id;
			cout<<endl;
			count++;
		};
		void getData(void){
			cout<<"The id of this employee is "<<id<<" and the employee number is "<<count<<endl;
		};

		static void getCount(void){// Static function takes static variable only and run with it instantiated object
			cout<<"Value of count is "<<count<<endl;
		};
}; 

int Employee::count; //if want to initialize then initialize here 

int main(){
	Employee harry, rohan, lovish;
	//harry.id = 23;
	//harry.count = 3; cant do this because these are private variables 
	
	harry.setData();
	harry.getData();
	Employee::getCount(); //This is how static function is declared

	rohan.setData();
	rohan.getData();
	Employee::getCount();

	lovish.setData();
	lovish.getData();
	Employee::getCount();
	
	//Note that the same count is updating, this is because it is declared as static variable
	return 0;
}
