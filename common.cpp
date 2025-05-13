#include<iostream>
#include<string>
using namespace std;

int factorial(int num){
	int y;
	if (num==0){
		y=1;
	}
	else {
		y= num*factorial(num-1);
	}
	return y;
};

int fibonacci(int num){
	int y;
	if (num <= 1 && num >=0){
	y = num;
	}
	else if (num>1){
	y = fibonacci(num-1)+fibonacci(num-2);
	}
//	else{
//	y=0;}
	
	return y;
};

void palindrom(string word){
	int i;
	for(i=0;i<word.length();i++){
		if (word[i] != word[word.length()-1-i]) {
		 	cout<<word<<" is not a palindrom. "<<endl;
			break;
		}
	}
	if (i==word.length()){cout<<word<<" is a palindrom. "<<endl;}
};

int main(){
	cout<<"factorial: "<<factorial(7)<<endl;
	cout<<"fibonacci: "<<fibonacci(10)<<endl;
	string word;
	cout<<"Enter to check pallindorm: ";
	cin>>word;
	cout<<endl;
	palindrom(word);

return 0;
};
