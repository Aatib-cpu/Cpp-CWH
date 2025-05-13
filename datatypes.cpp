#include<iostream> //for cin and cout
#include<iomanip>  //for setw()

using namespace std;

int c = 40;

int main(){
	//*************** global and local variables *************
	/*int a,b,c;
	cout<<"Enter the value of a: "; //"<<" insertion operetor
	cin>>a;
	cout<<"Enter the value of b: "; //">>" extartion operator
	cin>>b;
	c=a+b;
	cout<<"sum of a and b: "<<c<<endl;
	cout <<"global value of c: "<<::c; //"::" is called scope resulation operator, used to represent global variable
	*/
	
	//************** float, double, etc literals *************
	/*float d = 45.3;
	long double e = 45.3;
	cout<<"value of d: "<<d<<endl<<"value of e: "<<e<<endl;
	// if 45.3f is used to pass then it will pass as float. Similarly 45.3l is long double
	cout<<"size of 45.3f: "<<sizeof(43.3f)<<" bytes"<<endl;
	cout<<"size of 45.3l: "<<sizeof(43.3l)<<" bytes"<<endl;
	cout<<"size of 45.3L: "<<sizeof(43.3L)<<" bytes"<<endl;
	cout<<"size of 45.3F: "<<sizeof(43.3F)<<" bytes"<<endl;
	*/

	//************* Reference Variables *********************
	/*float x = 67;
	float &y = x; //y is reference variable of x
	cout<<x<<endl;
	cout<<y<<endl;*/

	//************ Tyecasting *******************************
	/*int a = 56;
	double b = 40.36;
	cout<<"value of a typecast to double: "<<double(a)<<endl; 
	cout<<"value of b typecast to int: "<<int(a)<<endl;
	cout<<"value of b typecast to int: "<<(int)a<<endl;
	cout<<"value of a+b : "<<a+b<<endl;
	cout<<"value of a+int(n) : "<<a+int(b)<<endl;
	*/

	//*************** setw() ***************************
	int a = 45;
	int b = 78886;
	cout<<"Value of a: "<<a<<endl;
	cout<<"Value of b: "<<b<<endl;
	cout<<"Value of a using setw(8): "<<setw(8)<<a<<endl; // 8 bit trailing spaces because of setw()
	cout<<"Value of b using setw(8): "<<setw(8)<<b<<endl;

	return 0;
}
