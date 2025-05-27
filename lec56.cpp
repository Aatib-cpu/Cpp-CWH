//************************************************** Lec 56: Virtual function first lec *************************************************************
#include <iostream>

using namespace std;

class base{
public: 
int var_base;
	 virtual void display(){
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
	derived_obj.var_derived = 1;
	base_ptr = &derived_obj;
	//*base_ptr = derived_obj;
	base_ptr->var_base = 10;
	base_ptr->display();//since base class has "display" as "virtual function" so it is not called rather derived class "display" function is called

	cout<<endl;
	derived* derived_ptr = new derived;
	*derived_ptr = derived_obj;
	derived_ptr->var_derived = 39;
	derived_ptr->display();
};
