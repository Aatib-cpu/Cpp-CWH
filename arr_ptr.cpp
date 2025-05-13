#include <iostream>

using namespace std;

int main(){ 
	double marks[] = {54.61, 34.62, 48.04, 46.09, 83.65};
	int length = sizeof(marks)/sizeof(marks[0]);
	cout<<"\nsizeof marks: "<<sizeof(marks)<<" bytes \nsizeof marks[0]: "<<sizeof(marks[0])<<" bytes \nlength = "<<length<<endl;
	
	double* p = marks;
	cout<<endl;
	cout<<"marks: "<<marks<<endl;
	cout<<"&p = "<<&p<<endl;
	cout<<"p = "<<p<<endl;
	cout<<"*p = "<<*p<<endl;
	cout<<"*(p+1) = "<<*(p+1)<<endl;
	cout<<"*(p+2) = "<<*(p+2)<<endl;
	cout<<"*(p+3) = "<<*(p+3)<<endl;
	return 0;
}
