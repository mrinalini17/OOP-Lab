//WAP to perform addition of 2 numbers,addition of 3 numbers,addition of 4 numbers.
#include<iostream>
using namespace std;

int add(int x,int y){
    return x+y;
}
int add(int x,int y,int z){
    return x+y+z;
}
int add(int w,int x,int y,int z){
    return w+x+y+z;
}
int main(){
    cout<<"addition of two numbers is: "<<add(4,5)<<endl;
    cout<<"addition of three numbers is: "<<add(4,5,8)<<endl;
    cout<<"addition of four numbers is: "<<add(4,5,9,7)<<endl;
}