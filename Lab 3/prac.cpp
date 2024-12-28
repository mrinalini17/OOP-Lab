//WAP to calculate area of triangle,circle,rectangle,square using function overloading
#include<iostream>
using namespace std;
 
float area(float h,float b){
    return (1/2)*b*h; 
}
 float area(float r){
    return (3.14)*r*r;
 }
 int area(int l, int b){
    return l*b;
 }
 int area(int s){
    return s*s;
 }
int main(){
    cout<<"Area of triangle: "<<area(4,2)<<endl;
    cout<<"Area of circle: "<<area(7)<<endl;
    cout<<"Area of rectangle: "<<area(4,2)<<endl;
    cout<<"Area of square: "<<area(4)<<endl;
}