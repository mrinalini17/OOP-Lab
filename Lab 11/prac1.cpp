/*WAP to read same line of the text into a file and display on the monitor.*/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("input.txt");
    fout<<"Welcome to C++ class "<<endl;
    fout<<"Hello Students"<<endl;
    fout.close();
    ifstream fin("input.txt");
    string str;
    while(getline(fin,str)){
        cout<<str<<endl;
    }
    fin.close();
    return 0;
}