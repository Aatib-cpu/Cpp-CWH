#include<iostream>
#include<cstdlib>
#include<ctime>
#include<array>

using namespace std;

const int dim = 3;
using Matrix = array<array<float,dim>,dim>;
using Minor = array<array<int,dim-1>,dim>;

class Inverse_Matrix{
	public: 
		int RandomGenerator();
		Matrix SetArray(Matrix&);
		int MinorDet(Minor&);
		Minor MinorGen(Matrix&, int, int);
		int DetResult(Matrix&);
		Matrix Cofactor(Matrix&);
		Matrix Inv(Matrix&, int);

};

int Inverse_Matrix::RandomGenerator(){
	return rand()%10;
};

Matrix Inverse_Matrix::SetArray(Matrix& array){
	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			array[i][j] = RandomGenerator();
			//cout<<"array["<<i<<"]["<<j<<"]: "<<array[i][j];
			cout<<"  "<<array[i][j];
		}
		cout<<endl;
	}
	return array;
};

int Inverse_Matrix::MinorDet(Minor& minor2){
	int res = (minor2[0][0]*minor2[1][1]) - (minor2[1][0]*minor2[0][1]);
	//cout<<"Minor Determinant: "<<res<<endl;
	return res;
};

Minor Inverse_Matrix::MinorGen(Matrix& minor2, int k, int l){
	//cout<<"Minor of the matrix"<<endl;
	Minor m;
	for(int i=0;i<dim-1;i++){
		for(int j=0;j<dim-1;j++){
			if(i<k){
				if(j<l){
					m[i][j] = minor2[i][j];
				}
				else{
					m[i][j] = minor2[i][j+1];
				}
			}
			else{
				if(j<l){
					m[i][j] = minor2[i+1][j];
				}
				else{
					m[i][j] = minor2[i+1][j+1];
				}

			}
			//cout<<"array["<<i<<"]["<<j<<"]: "<<m[i][j];
			//cout<<"  "<<m[i][j];
		}
		//cout<<endl;
	}
	return m; 
};

int Inverse_Matrix::DetResult(Matrix& array){
	int result = 0;
	for(int i=0;i<dim;i++){
		Minor m =  MinorGen(array,0,i);
		int temp = (1-(2*(i%2)))*array[0][i]*MinorDet(m);
		result = result + temp; 
		//cout<<"array[0]["<<i<<"]: "<<array[0][i]<<" temp: "<<temp<<endl;
	}
	return result;
};

Matrix Inverse_Matrix::Cofactor(Matrix& array){
	Matrix c;
	for (int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			Minor m = MinorGen(array,i,j);
			c[i][j] = (1-(2*((i+j)%2)))*MinorDet(m);
		}
	}
	return c;
};

Matrix Inverse_Matrix::Inv(Matrix& array, int det){
	Matrix Inv_array;
	for (int i=0;i<dim;i++){
		for(int j =0;j<dim;j++){
			Inv_array[i][j]=(array[j][i])/det;
			cout<<"  "<<Inv_array[i][j];
		}
		cout<<endl;
	}
	return Inv_array;
};

int main(){
	srand(time(nullptr));
	Inverse_Matrix d;
	
	Matrix array;
	d.SetArray(array);

	int result = d.DetResult(array);
	cout<<"\nResult of Determinant: "<<result<<endl;
	cout<<"\nInverse of Matrix: "<<endl;
	array = d.Cofactor(array);
	array = d.Inv(array,result);

	return 0;
}
