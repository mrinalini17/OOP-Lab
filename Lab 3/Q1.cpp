/*Write a program to demonstrate the concept of call-by-value, call-by-reference & call-by-
address by taking swapping of two numbers as an example.*/

#include<iostream>
using namespace std;
void c_val(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"After interchanging: "<<endl;
    cout<<"Value of x: "<<x<<" "<<"Value of y: "<<y<<endl;
}
void c_ref(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"After interchanging: "<<endl;
    cout<<"Value of x: "<<*x<<" "<<"Value of y: "<<*y<<endl;
}
void c_address(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"After interchanging: "<<endl;
    cout<<"Value of x: "<<x<<" "<<"Value of y: "<<y<<endl;
}
int main(){
    int x,y;
    cout<<"Enter 2 numbers: ";
    cin>>x>>y;
    c_val(x,y);
    c_ref(&x,&y);
    c_address(x,y);
    return 0;
}