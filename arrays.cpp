#include<iostream>

using namespace std;

int main(){
	int arr[5] = {45,34,65,12,867};
	int length = sizeof(arr)/sizeof(arr[0]);
	cout<<"sizeof(): "<<sizeof(arr)<<" length: "<<length<<endl;

	//***************** Using For Loop *************
	/*for(int i=0; i<length;i++){
		cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
	}*/

	//***************** Using While ****************
	/*int i =0;
	while(i<length){
		cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
		i++;
	}*/
	
	//***************** Using Do While *************
	/*int i = 0;
	do{
		cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
		i++;
	}while(i<length);*/

	int arr1[9];
	for(int i=0;i<10;i++){
		arr1[i] = 5*i;
		cout<<"5*"<<i<<"= "<<arr1[i]<<endl;
	}

	return 0;
}
