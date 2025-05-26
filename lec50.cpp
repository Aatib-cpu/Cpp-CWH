//******************************************************* Lec50: Revising Pointers *************************************************************
#include <iostream>

using namespace std;

int main(){	
	int a=10;
	int* p = &a;
	cout<<"p: "<<p<<endl;
	cout<<"&a: "<<&a<<endl;
	cout<<"*p: "<<*p<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"************************************************************"<<endl;
	//cout<<endl;	
	float *ptr = new float(56.29);
	int *ptr1 = new int(398);
	cout<<"ptr: "<<ptr<<endl;
	cout<<"ptr1: "<<ptr1<<endl;
	cout<<"*ptr: "<<*ptr<<endl;
	cout<<"*ptr1: "<<*ptr1<<endl;
	cout<<"************************************************************"<<endl;
	//cout<<endl;
	int* array = new int[3];
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	cout<<"array: "<<array<<endl;
	cout<<"array+1: "<<array+1<<endl;
	cout<<"array+2: "<<array+2<<endl;
	cout<<"*array: "<<*array<<endl;
	cout<<"array[0]: "<<array[0]<<endl;
	cout<<"*(array+1): "<<*(array+1)<<endl;
	delete [] array; // Delete dynamically created array
	return 0;
};
