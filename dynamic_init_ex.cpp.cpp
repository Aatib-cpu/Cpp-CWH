#include<iostream>

using namespace std;

class BankDeposit{	
	int principal;
	int year;
	float interestRate;
	float returnValue;

	public: 
		BankDeposit(){};
		BankDeposit(int,int,float); //for r in decimal
		BankDeposit(int,int,int); //for r in percentage
		
		void show(){
			cout<<"Principal: "<<principal<<endl
				<<"Year: "<<year<<endl
				<<"Interest Rate: "<<interestRate<<endl
				<<"Return Value: "<<returnValue<<endl;
		};
};

BankDeposit::BankDeposit(int p, int y, float r){
	principal = p;
	year = y;
	returnValue = p;
	interestRate = r;

	for (int i=0;i<y;i++){
		returnValue= returnValue * (1+interestRate);
	}
};

BankDeposit::BankDeposit(int p, int y, int r){
	principal = p;
	year = y;
	returnValue = p;
	interestRate = float(r)/100;

	for(int i=0;i<y;i++){
		returnValue= returnValue * (1+interestRate);
	}
};

int main(){
	BankDeposit bd1, bd2, bd3;
	int p, y;
	float r;
	int R;

	cout<<"\nEnter the value of p, y and r: ";
	cin>>p>>y>>r;

	bd1 = BankDeposit(p,y,r);
	bd1.show();

	cout<<"\nEnter the value of p, y and r: ";
	cin>>p>>y>>R;
	bd2 = BankDeposit(p,y,R);
	bd2.show();
return 0;
}

