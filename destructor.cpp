#include<iostream>

using namespace std;
int count = 0;
class num{
	public: 
		num(){
			count++;
			cout<<"Constructor is called for object number: "<<count<<endl;
		};

		~num(){
			count--;
			cout<<"Destructor is called for object number: "<<count<<endl;
		};
};

int main(){
	cout<<"main function is called: "<<endl;

	num n1;
	{
	cout<<"entering the block"<<endl;
	num n2,n3;
	cout<<"exiting the block"<<endl; 
	}

	cout<<"Back to main"<<endl;
	
	return 0;
};
