#include<iostream>

using namespace std; 

class Employee{
	int id;
	int salary;
	public: 
		void setId(void){
			salary = 122;
			cout<<"Enter the id of employee: "<<endl;
			cin>>id;
		};

		void getId(){
			cout<<"The Id of thid Employee is "<<id<<endl;
		};
};

class Complex{
	int a;
	int b;
	friend Complex ComplexConjugate(Complex);
	public: 
	void setData(int v1, int v2){
		a = v1;
		b = v2;
	};

	void complexSum(Complex o1, Complex o2){ //Declaring function that take object as parameter
		a = o1.a+o2.a;
		b = o1.b+o2.b;
	};
	
	void printComplex(){
		cout<<"Value of a: "<<a<<" and value of b: "<<b<<endl;
	};
};

Complex ComplexConjugate(Complex o1){
	Complex o2;
	o2.setData(o1.a,-o1.b);
	return o2;
};

int main(){
	/*Employee fb[4]; //Same way as creating array
	
	for(int i=0; i<4;i++){	// Initializing array object with for loop
		fb[i].setId();
		fb[i].getId();
	}; */
	
	cout<<endl;

	Complex o1,o2,o3,o4;
	o1.setData(1,5);
	o1.printComplex();

	o2.setData(3,7);
	o2.printComplex();

	o3.complexSum(o1, o2); // Passing object as parameter 
	o3.printComplex();

	o4 = ComplexConjugate(o2); //Example of friend function 
	o4.printComplex();
	return 0;
}
