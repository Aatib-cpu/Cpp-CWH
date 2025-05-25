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
