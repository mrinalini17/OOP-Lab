/*Define a class called Triangle, with two fields as base and height to calculate the area of a
triangle. The class contains two methods such as getData() to initialize the fields of a triangle
and areaTrin() to calculate the area of a triangle. Write a program to find out area of 10
triangles.*/


#include <iostream>
using namespace std;

class triangle
{
private:
    int base, height;
public:
    void getData();
    void areaTrin();
};

void triangle::getData()
{
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter height: ";
    cin>>height;
}

void triangle::areaTrin()
{
    float area =  (float)(base*height)*0.5;
    cout<<"The area of the triangle is "<< area;
}

int main()
{
    triangle ob;
    ob.getData();
    ob.areaTrin();

    return 0;
}