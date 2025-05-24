/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Ans: Multiple Inheritance
    Q2. Which mode of Inheritance are you using?
    Ans: Public mode
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
    Ans: Function named "io_func" is declared in both the class and corresponding function is called depending on the number of operands

*/

#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator{
	float result;
	float a, b;
	public: 
		float operation(char op){
			
			switch (op) {
			case '+': return a+b;
			case '*': return a*b;
			case '/': return a/b;
			case '-': return a-b;
			default: cout<<"invalid entry"<<endl; return 0;
			}
		};
		
		void io_func(void){
			cout<<"Enter the first number for operation:  ";
			cin>>a;cout<<endl;
			cout<<"Enter the second number for operation: ";
			cin>>b;cout<<endl;
			
			char op;
			cout<<"Enter the operator +,-,*,/: ";
			cin>>op;cout<<endl;
			
			result = operation(op);
			cout<<"result = "<<result;
		};
};

class ScintificCalculator{
	float result;
	float a;
	public: 
		float operation(int op){
			
			switch (op) {
			case 1: return sinf(a*3.14159265/180); //sin
			case 2: return expf(a); //exponent
			case 3: return logf(a); //logarithmic
			case 4: return sqrtf(a); //squar root
			default: cout<<"invalid entry"<<endl; return 0;
			}
		};
		
		void io_func(void){
			cout<<"Enter the number for operation:  ";
			cin>>a;cout<<endl;
			
			int op;
			cout<<"1:sin(degree) "
				<<"2:exp "
				<<"3:log(base e) "
				<<"4:sqrt \n"
				<<"choose the operator: ";
			cin>>op;cout<<endl;
			
			result = operation(op);
			cout<<"result = "<<result;
		};
};

class HybridCalculator : public SimpleCalculator, public ScintificCalculator{
public: 
	void choose_calc(void){
		int op;
		cout<<"Total number of operands: ";
		cin>>op; cout<<endl;

		if (op==1) 
			ScintificCalculator::io_func();
		else 
			SimpleCalculator::io_func();
	};
};

int main(){
	/*ScintificCalculator s;
	s.io_func();
	return 0;*/

	HybridCalculator c;
	c.choose_calc();
};
