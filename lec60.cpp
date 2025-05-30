//**************************************************** Lec60.cpp: Reading and Writing files *********************************************************

#include <iostream>
#include <fstream>

using namespace std;

int main(){
string st = "Kon'nichiwa, sekai! Watashi wa Aatibdesu. Hajimemashite."; 
ofstream out("sample.txt");
out<<st<<endl; 

string sr;
ifstream in("sample.txt");
getline(in,sr);
cout<<sr<<endl;

};
