//************************************************* Lec51: Pointers to object and arrow pointer *******************************************************
#include <iostream>

using namespace std;

class Complex{
int real;
int img;
public:
	void get_data(int r, int i){
		real = r;
		img = i;
	};
	void show_data(void){
		cout<<"real: "<<real<<" img: "<<img<<endl;
	};
};

int main(){
	Complex c1;
	(c1).get_data(3,6);
	c1.show_data(); //arrow operator is same as (*c1)

	Complex *c2 = new Complex;
	c2->get_data(5, 3);
	c2->show_data();

	Complex *c = new Complex[3]; //Create an array of object complex
	return 0;
};
