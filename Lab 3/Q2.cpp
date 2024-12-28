/*Write a program to demonstrate the use of scope resolution operator(::) by declaring same
varibale name globally and locally and display the value of gloabl and local variables.*/

#include<iostream>
using namespace std;
int x=30;
int main(){
    int x=10;
    cout<<"Value of global x is "<<::x<<endl;
    cout<<"Value of local x is "<<x;
    return 0;
}