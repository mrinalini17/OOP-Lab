//WAP to write a line of text into a file. Count no. of characters,words,vowels,consonants
//while reading from the file and display on the monitor.
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main(){
    string str,r;
    int vowel=0,count=0;
    ofstream fout;
    fout.open("input1.txt");
    cin>>str;
    for (int i = 0; str[i] != '\0';i++){
        if (str[i] == ' ')
            count++;    
    }
    fout<<"The number of words are "<<count<<endl;
    fout<<"length is "<<str.length()<<endl;
    for(int i = 0; str[i]; i++) {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'|| str[i]=='u'||str[i]=='A'||str[i]=='E'||
        str[i]=='I'||str[i]=='O' ||str[i]=='U'){
            vowel++;
        }
    }
    fout<<"The vowels are "<<vowel<<endl;
    fout<<"The consonents are "<<str.length()-vowel<<endl;
    fout.close();
    ifstream fin("input1.txt");
    string s;
    while(getline(fin,s)){
        cout<<s<<endl;
    }
    fin.close();
}