#include<iostream>

using namespace std;

class Employee{
	private:
		int a, b, c;
	public:
		int d,e;
		
		void GetData(){
			cout<<"value of a: "<<a<<endl;
			cout<<"value of b: "<<b<<endl;
			cout<<"value of c: "<<c<<endl;
			cout<<"value of d: "<<d<<endl;
			cout<<"value of a: "<<e<<endl;
		};
		void SetData(int, int, int);
};

void Employee::SetData(int a1, int b1, int c1){
	a = a1;
	b = b1;
	c = c1;
};

int main(){
	//OOPs - Classes and Objects
	//C++ - initialy called C with classes
	//Limitation of structure - no methods, member are public 
	//classed - structure + methods + private and public members
	//We can declare object along with declaration: 
	//	class Employee{
	//		//class statements
	//	} aatib, abhiq, sourav;
	
	Employee aatib;
	//aatib.a = 54; This will show error because "a" is private type
	aatib.d = 45;
	aatib.e = 73;
	aatib.SetData(1,3,4);
	aatib.GetData();

	return 0;
}
