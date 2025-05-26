// ************************************************* Lec49: Initialization list in Constructor *****************************************************
#include<iostream>

using namespace std;

class Test{
int a,b;
public:
	Test(int x, int y) : a(x), b(y) { // initializing constructor using scope
		cout<<"Test Constructor is called"<<endl;
		cout<<"Value of a: "<<a<<endl;
		cout<<"Value of b: "<<b<<endl;
	};
};

int main(){
	Test a(45,20);
	return 0;
};

/*
Figure 1: Program Output

Main Points

The main thing to note here is that if we use the code shown below to initialize data members the compiler will throw an error because the data member “a” is being initialized first and the “b” is being initialized second so we have to assign the value to “a” data member first.

Test(int i, int j) : b(j), a(i+b)

Code Snippet 3: Initialization list in Constructors Example 1

But if we use the code shown below to initialize data members the compiler will not throw an error because the data member “a” is being initialized first and we are assigning the value to the data member “a” first.

Test(int i, int j) : a(i), b(a + j)
*/
