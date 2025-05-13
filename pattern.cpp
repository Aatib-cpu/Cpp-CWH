#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void up_right_triangle(int num){
	
	for(int i=0;i<num;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}	
};

void up_right_triangle_inv(int num){
	
	for(int i=0;i<num;i++){
		for(int j=i;j<num;j++){
			cout<<"*";
		}
		cout<<endl;
	}	
};

void hour_glass(int num){

	int i = 0;
	while(i<num){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		for(int k=i;k<num;k++){
			cout<<"**";
		}
		i++;
		cout<<endl;
	}
	/*for(int ii = 0;ii<num;ii++){
		cout<<" ";
	}
	cout<<"*"<<endl;*/

	while(i>0){
		for(int j=1;j<i;j++){
			cout<<" ";
		}
		for(int k=i;k<=num;k++){
			cout<<"**";
		}
		i--;
		cout<<endl;
	}

};


void diamond(int random_num){
	//********* Logic for Pattern *************
	int up = random_num;
	
	//Upper Triangle
	while (up>0){
	for(int i=0;i<up;i++){
		cout<<" ";
		if (i==(up-1)){
			cout<<"*";
		}
	}
	for(int j=0;j<2*(random_num-up)-1;j++){
		cout<<" ";
		if (j==(2*(random_num-up)-2)){
			cout<<"*";
		}
	}
	up--;
	cout<<endl;
}
	
	//Lower Triangle
	while(up<random_num){
		for(int i=0;i<up+1;i++){
		cout<<" ";
		if (i==(up)){
			cout<<"*";
		}
	}
		for(int j=0;j<2*(random_num-up-1)-1;j++){
		cout<<" ";
		if (j==(2*(random_num-up-1)-2)){
			cout<<"*";
		}
	}
		cout<<endl;
		up++;
	}

};

int main(){
	srand(time(nullptr));
	
	//General Formula: int Random_Num = rand()%(max-min+1)+min;
	int random_num = rand()%10+1;
	cout<<"random number: "<<random_num<<endl;

	up_right_triangle(random_num);
	cout<<endl;
	diamond(random_num);
	cout<<endl;
	up_right_triangle_inv(random_num);
	cout<<endl;
 	hour_glass(random_num);
	return 0;
}
