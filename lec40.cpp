// ***************************** Multilevel Inheritance with Access Modifiers ************************************

/*
 * Members			Public Derivation	Private Derivation	Protected Derivation
 * 1. Private Members		Not Inherited		Not Inheritated 	Not Inheritated
 * 2. Protected Members		Protected		Private			Protected 
 * 3. Public Members		Public			Private			Protected
 */

#include<iostream>

using namespace std;

class student{
	protected: 
		int roll;
	public: 
		void set_roll(int);
		void get_roll(void);
};

void student::set_roll(int r){
	roll = r;
};

void student::get_roll(void){
	cout<<"Student Roll Number: "<<roll<<endl;
};

class Exam: public student{
	protected: 
		float maths;
		float physics;
	public: 
		void set_marks(float,float);
		void get_marks(void);
};

void Exam::set_marks(float x, float y){
	maths = x; physics = y;
};

void Exam::get_marks(void){
	cout<<"Maths mark: "<<maths<<endl;
	cout<<"Physics mark: "<<physics<<endl;
};

class Result: public Exam{
	float percentage;
	public: 
		void display(){
			get_roll();
			get_marks();
			cout<<"Your Marks: "<<(maths+physics)/2<<"%"<<endl;
		};
};

int main(){
	/*student st;
	st.set_roll(45);
	st.get_roll();*/
	
	//Inheritance path: student ----> Exam ----> Result
	Result harry;
	harry.set_roll(420);
	harry.set_marks(100,96);
	harry.display();
	return 0;
}
