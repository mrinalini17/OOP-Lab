/*Write a program to find the summation of three numbers by using one function only with
function name SUM having three arguments. If at run time one argumnet is given to the
function SUM, then second and third argument will be assumed by default as 10 and 20
respectively. If two argumnets are given at run time, then thrird argument will be assumed as 20.
Use function with default argument concepts.*/

#include<iostream>
using namespace std;

int SUM(int x=0,int y=10,int z=20);
int main(){
    cout<<"Sum : "<<SUM(2)<<endl;
    cout<<"Sum : "<<SUM(3,15)<<endl;
    cout<<"Sum : "<<SUM(4,5,6)<<endl;
    return 0;
}
int SUM(int x,int y,int z){
    return x+y+z;
}
