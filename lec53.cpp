//******************************************************* lec53: "this" pointer **********************************************************************
#include <iostream>

using namespace std;

class A{
	int a;
public:
	//A& getData(int a){ 
	void getData(int a){
		this->a = a;
		//return *this;
	};

	void showData(void){
		cout<<"value of a: "<<a<<endl;
	};
};

int main(){
	A a;
	a.getData(9);
	a.showData();

	return 0;
};
