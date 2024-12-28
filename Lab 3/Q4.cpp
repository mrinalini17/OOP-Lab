/*Write a program to find out area or volume of an shape/object by using one function name as
FUN-AREA only. If the function takes one argumnet then it will calculate area of a circle, two
argument for area of rectangle and three argumnet volume of a box. If no argumnet is given to
the function, then it will display appropriate message.*/

#include<iostream>
using namespace std;
double FUN_AREA(int r){
    return 3.14*r*r;
}
double FUN_AREA(int x,int y){
    return x*y;
}
double FUN_AREA(int m,int n,int q){
    return m*n*q;
}
void FUN_AREA(){
    cout<<"Invalid"<<endl;
}
int main(){
    cout<<"Area of the circle: "<<FUN_AREA(5)<<endl;
    cout<<"Area of rectange: "<<FUN_AREA(6,7)<<endl;
    cout<<"Volume of the box: "<<FUN_AREA(8,9,10)<<endl;
    return 0;
}