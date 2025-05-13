#include<iostream>

using namespace std;

class Complex{
int a;
int b;
public: 
	// more than one constructor but different input. This is called constructor overloading
	Complex(void); 	// This is default constructor declaration
	Complex(int, int);	// This is parametrized constructor declaration
	Complex(int);
	void printComp(){
		cout<<"Value of a: "<<a<<" value of b: "<<b<<endl;
	};
		
};

Complex::Complex(void){ // This is Default Constructor which takes no parameter
	a =1;
	b =1;
};

Complex::Complex(int x, int y){ //This is Parametrized Constructor which takes aruguments  
	a=x;
	b=y;
};

Complex::Complex(int x){
	a = x;
	b = 0;
};

int main(){

	Complex d; //defult constructor
	d.printComp();

	Complex c(3,4);
	c.printComp();

	Complex c1(6);
	c1.printComp();

	return 0;
}
