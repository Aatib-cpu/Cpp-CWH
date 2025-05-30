//********************************************* Lec 60: File I/O in C++: open() and eof() functions ********************************************************
#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;
 
int main()
{
	ofstream out;
	out.open("sample.txt");
	out<<"This line number 1\nline number 2\nline number 3"<<endl;
	out.close();

    // declaring an object of the type ifstream
    ifstream in;
    //declaring string variable st
    string st;
    //opening the text file into in
    in.open("sample.txt");
 
    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof()==0) 
    {
        // using getline to fill the whole line in st
        getline(in,st);
        cout<<st<<endl;
    }
	in.close();
    return 0;
}

