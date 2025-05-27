#include <iostream>

using namespace std;

class base{
public: 
int var_base;
	void display(){
		cout<<"base class is called"<<endl;
		cout<<"var_base: "<<var_base<<endl;
	};
};

class derived: public base{
public: 
int var_derived;
	void display(){
		cout<<"derived class is called"<<endl;
		cout<<"var_derived: "<<var_derived<<endl;
	};
};

int main(){
	base* base_ptr = new base;
	derived derived_obj;
	base_ptr = &derived_obj;
	//*base_ptr = derived_obj;
	base_ptr->var_base = 10; //since base_ ptr pointer of base, so even if it is pointing derived class but it will show function and variable of base
	base_ptr->display();

	cout<<endl;
	derived* derived_ptr = new derived;
	*derived_ptr = derived_obj;
	derived_ptr->var_derived = 39;
	derived_ptr->display();
};
