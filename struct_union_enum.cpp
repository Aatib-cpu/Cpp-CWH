#include<iostream>
#include<string>

using namespace std;

struct employee{
		string name;
		int id;
		int salary;
		float exp;
	};

typedef struct student{ //easy instantiation with typedef
		int roll;
		float marks;
		int age;
	}st;

union food{ //Union is used for better memory management and ony one varaible will used for each instantiation
	bool vegitarian;
	bool non_vegitarian;
	bool eggitarian;
};

enum meal{ //enum is used for proper ordering
	Breakfast,
	Lunch,
	Dinner,
};

int main(){
	struct employee Aatib; //declaration of struct for not using typedef
	Aatib.name = "Aatib";
	Aatib.id = 2044;
	Aatib.salary = 9000;
	Aatib.exp = 1.6;

	cout<<"Aatib.name: "<<Aatib.name<<endl;
	cout<<"Aatib.id: "<<Aatib.id<<endl;
	cout<<"Aatib.salary: "<<Aatib.salary<<endl;
	cout<<"Aatib.exp: "<<Aatib.exp<<endl;

	st Harry; //advantage of using typedef
	Harry.roll = 23;
	Harry.marks = 90.5;
	Harry.age = 27;
	cout<<"Harry.roll: "<<Harry.roll<<endl;
	cout<<"Harry.marks: "<<Harry.marks<<endl;
	cout<<"Harry.age: "<<Harry.age<<endl;

	union food Ginny;
	Ginny.non_vegitarian = true;
	cout<<"Ginny.non_vegitarian: "<<Ginny.non_vegitarian<<endl;
	

	cout<<"Breakfast: "<<Breakfast<<endl;
	cout<<"Lunch: "<<Lunch<<endl;
	cout<<"Dinner: "<<Dinner<<endl;

	meal m1 = Dinner;
	cout<<"m1: "<<Dinner<<endl;
	
	return 0;
}
