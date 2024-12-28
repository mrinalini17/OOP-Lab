/*WAP to input into file and read the file and display on screen*/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("user.txt");
    string abc;
    cout<<"Enter text: ";
    cin>>abc;
    cout<<abc<<endl;
    fout.close();
    ifstream fin("user.txt");
    string str;
    while(getline(fin,str)){
        cout<<str<<endl;
    }
    fin.close();
    return 0;
}