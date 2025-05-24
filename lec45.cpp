//**************************************************** Lec 45: Virtual base class with example *******************************************************

#include <iostream>

using namespace std;

/*
 * Declaring virtual base class avoid double inherit if 3rd level class "result" is declared with 2 base class "exam" and "sport" which is define from base class "student".
 *
 * student-->test
 * student-->sport
 * test,sport-->result
 *
	*/

class studnet{
	protected: 
		string roll;
	public:
		void set_roll(string r){
			roll = r;
		};
		void show_roll(void){
			cout<<"student roll no: "<<roll<<endl;
		};
};

class test: virtual public studnet{ // test in virtual class of public
	protected:
		int maths;
		int physics;
	public: 
		void set_marks(int m1, int m2){
			maths = m1; physics = m2;
		};
		void show_marks(void){
			cout<<"maths mark: "<<maths<<" and physics mark: "<<physics<<endl;
		};
};

class sport: virtual public studnet{
	protected: 
		float score;
	public: 
		void set_score(int r){
			score = r;
		};
		void show_score(void){
			cout<<"PT score: "<<score<<endl;
		};
};

class result: public test, public sport{
	private: 
		float total;
	public:
		void display(void){
			total = maths + physics + score;
			show_roll();
			show_marks();
			show_score();
			cout<<"Total marks: "<<total<<endl;
		};

};

int main(){
	result aatib;
	aatib.set_roll("H20220239P");
	aatib.set_marks(95,98);
	aatib.set_score(82);
	aatib.display();
	return 0;
};
