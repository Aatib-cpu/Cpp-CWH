#include<iostream>

using namespace std;

class Y; // Forwarding Declaration
class X{
	int valx;
	friend void exchange(X&,Y&); // Friend can be declare above public or below public

	public: 

	void setData(int a){
		valx = a;
	};

	void display(void){
		cout<<"Value of valx: "<<valx<<endl;
	};
};

class Y{
	int valy;

	public: 
	friend void exchange(X&,Y&);

	void setData(int a){
		 valy= a;
	};

	void display(void){
		cout<<"Value of valy: "<<valy<<endl;
	};
};

void exchange(X &a, Y &b){
	int temp = a.valx;
	a.valx = b.valy;
	b.valy = temp;
};

int main(){
	
	X o1;Y o2;
	o1.setData(23);	
	o1.display();
	o2.setData(53);
	o2.display();
	
	exchange(o1,o2);
	o1.display();
	o2.display();

	return 0;
}
