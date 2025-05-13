#include <iostream>

using namespace std;

class converter{
	

	public:
		long int d2b(int);
		int b2d(long int);

};

long int converter::d2b(int d){
	long int b = 0;
	int temp = d;
	long int i = 1;
	while(temp>0){
		int rem = temp%2;
		b=b+rem*i;
		i=i*10;
		temp = temp/2;

	//cout<<"temp= "<<temp<<" rem= "<<rem<<" b= "<<b<<" i= "<<i<<endl;
	}

return b;
};

int converter::b2d(long int b){
	int d = 0;
	long int temp = b;
	int count = 0;
	while(temp>0){
		int mul = temp%10;
		temp = temp/10;
		if (mul>0){
		for(int j=0;j<count;j++){
			mul = 2*mul;
		}
		}
		count++;
		d = d + mul;
		//cout<<"d = "<<" and mul: "<<mul<<endl; 
	}
return d;
};

int main(){
	int d;
	cout<<"enter the decimal number: ";
	cin>>d;

	converter obj;
	long int b = obj.d2b(d);
	int dd = obj.b2d(b);
	cout<<"\nbinary: "<<b<<" and it corresponding decimal value: "<<dd<<endl;
return 0;
}
