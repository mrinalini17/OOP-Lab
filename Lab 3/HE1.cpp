/*Write a program to compute absolute value of a number (integer or float) by using function
overloading for computation of absolute value. The number is entered through keboard.*/

#include<iostream>
using namespace std;

float abs_val(float x){
    if(x>0){
        cout<<"The absolute value of the entered number: "<<x<<endl;
    }
    else{
        cout<<"The absolute value of the entered number: "<<-(x)<<endl;
    }
    return 0;
}
int main(){
    float x;
    cout<<"Enter an integer: ";
    cin>>x;
    abs_val(x);
}