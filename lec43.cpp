//******************************************* Lec 43: Ambiguity Resolution in Inheritance in C++ *******************************************************

#include <iostream>
using namespace std;

class base1{
	public: 
		void greet(void){
			cout<<"Hello World"<<endl;
		};
};

class base2{
	public: 
		void greet(void){
			cout<<"Namaste Duniya"<<endl;
		};
};

class derived: public base1, public base2{
	public:
		void greet(void){
			base2::greet();// To avoid ambiguity "base2::" is written before the function because both the class has same funcion name
		};
};
int main(){
		derived d;
		d.greet(); // greet function of base1 and base2 is over written by new declaration in derived class
	return 0;
};
