/*Write a program to create a class CIRCLE with one field as radius, used
to calculate the area of a Circle. Create another class RECTANGLE used to calculate the area
of the rectangle which is a subclass of CIRCLE class. Use the concept of single inheritance
such that the radius of circle class can be re-used as length in rectangle class. Take necessary
data members and member functions for both the classes to solve this problem. All the data
members are initialized through the constructors. Show the result by accessing the area
method of both the classes through the objects of rectangle class.*/
#include<iostream>
using namespace std;
class circle{
    protected:
    int r;
    float area_circle;
    public:
    void cal_area_circle()
    {
        area_circle=3.14*r*r;
    }
};
class rectangle : public circle
{   
    protected:
    float area_rectangle;
    int b;
    public:
    rectangle()
    {
        cout<<"Enter radius/length : ";
        cin>>r;
        cout<<"Enter breadth : ";
        cin>>b;
    }
    void cal_area_rectangle()
    {
        area_rectangle=r*b;
    }
    void display()
    {
        cout<<"Area of circle = "<<area_circle<<endl;
        cout<<"Area of rectangle = "<<area_rectangle<<endl;
    }
};
int main()
{
    rectangle ob;
    ob.cal_area_circle();
    ob.cal_area_rectangle();
    ob.display();
    return 0;
}
