#include <iostream>

using namespace std;

void swap(int*, int*); //function prototyping
int main(){

	int a,b;
	cout<<"enter value of a: ";
	cin>>a;cout<<endl;
	cout<<"enter value of b: ";
	cin>>b;cout<<endl;

	swap(&a,&b); //passing address
	
	cout<<"final value of a: "<<a<<endl<<"final value of b: "<<b<<endl;
return 0;
}

void swap(int* a,int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

};
