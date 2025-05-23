//*************************************** Lec 41: Multiple inheritance ***************************************

#include <iostream>
using namespace std;

class base1{
	protected: 
		int baseint1;
	public: 
		void get_data1(int r){
			baseint1 = r;
			cout<<"baseint1 value: "<<baseint1<<endl;
		}
};

class base2{
	protected: 
		int baseint2;
	public: 
		void get_data2(int r){
			baseint2 = r;
			cout<<"baseint2 value: "<<baseint2<<endl;
		}
};

class derived: public base1, public base2{ //derived is inherited from both base1 and base2
	public:
		void show_result(void){
			cout<<"sum of baseint1 and baseint2: "<<baseint1+baseint2<<endl;
	}
};

int main(){
	derived salman;
	salman.get_data1(23);
	salman.get_data2(94);
	salman.show_result();
	return 0;
};
