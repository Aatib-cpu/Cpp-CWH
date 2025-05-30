#include<iostream>
#include<cstring>

using namespace std;

template <class T>
class vector{
public: 
	T *arr;
	int size;
	vector(int m){
		size = m;
		arr = new T[size];
	}; 
	T dotProduct(vector v){
		T d = 0;
		for(int i = 0; i<size; i++){
			d = d + (v.arr[i])*(this->arr[i]);
		}
		return d;
	};
};

int main(){
	vector<int> v1(3);
	v1.arr[0] = 1;
	v1.arr[1] = 2;
	v1.arr[2] = 6;
	vector<int> v2(3);
	v2.arr[0] = 1;
	v2.arr[1] = 1;
	v2.arr[2] = 6;
	cout<<"For int: "<<v1.dotProduct(v2)<<endl;

	vector<float> v3(3); //vector 1 with a float data type
    	v3.arr[0] = 1.4;
   	v3.arr[1] = 3.3;
    	v3.arr[2] = 0.1;
    	vector<float> v4(3); //vector 2 with a float data type
    	v4.arr[0]=0.1;
    	v4.arr[1]=1.90;
    	v4.arr[2]=4.1;
    	cout<<"For float: "<<v4.dotProduct(v3)<<endl;
	
	return 0;
};
