#include <iostream>

using namespace std;

//function prototyping 
float sum(float, float); 
float product(float, float);
float MoneyReceived(float CurrentMoney, float factor = 1.05){
	return CurrentMoney*factor;
}; 

int main(){
	float a,b,c;
	float CurrentMoney;
	cout<<"\nEnter value of a: ";
	cin>>a;
	cout<<"\nEnter value of b: ";
	cin>>b;
	c=sum(a,b);
	cout<<"\nsum: "<<c<<endl;
	cout<<"product: "<<product(a,b)<<endl;
	cout<<"product: "<<product(5,8)<<endl;
	cout<<"product: "<<product(7,6.9)<<endl;
	cout<<"product: "<<product(4.5,2.3)<<endl;
	
	cout<<"\nEnter the current money: ";
	cin>>CurrentMoney;cout<<endl;
	cout<<"Return value after the investment: "<<MoneyReceived(CurrentMoney)<<endl;
		
	cout<<"Return value after the investment for premium member: "<<MoneyReceived(CurrentMoney,1.1)<<endl; //Default value for factor can be changed 
	return 0;
}

float sum(float a, float b){
	float result = a+b;
	return result;
}

inline float product(float a, float b){ //inline keyword is used for faster execution because this function used multiple times so stored in cache 
	return a*b;
};


/*
Notes:
1) If a variable is declared with static then it is initialized only once. Numerous function will remember the last value used. 
2) Never use static variable in inline fucntion.
3) Never use static variable in loops.

*/


