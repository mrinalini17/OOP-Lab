//Write a program to find out the area of a circle and volume of a sphere by using function 
//overloading concept. (Use one function name as AREA-VOL)
#include<iostream>
using namespace std;
double AREA_VOL(int r){
    return 3.14*r*r;
}
double AREA_VOL(float r){
    return (4/3)*3.14*r*r*r;
}
int main(){
    int r;
    cout<<"Enter radius ";
    cin>>r;
    cout<<"Area of circle: "<<AREA_VOL(r)<<endl;
    cout<<"Volume of sphere: "<<AREA_VOL(float(r))<<endl;
    return 0;
}
