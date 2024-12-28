/*(Hierarchical Inheritance) Modify the program no. LE6.1 as follows:
Derive a class named as CYLINDER from CIRCLE class. Take necessary data & member
functions for this class to calculate the volume of the cylinder. Show the result by accessing
the area method of circle and rectangle through object of rectangle class and the area of circle
and volume method of cylinder class through the objects of cylinder class.*/
#include<iostream>
using namespace std;
class circle
{
    protected:
    int r;
    float area_circle;
    public:
    circle()
    {
        cout<<"Enter radius/length of circle/rectangle : ";
        cin>>r;
    }
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
        cout<<"Enter breadth of rectangle : ";
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
class box : public circle
{
    protected:
    int a,h;
    float vol_box;
    public:
    box()
    {
        cout<<"Enter breadth and height of box : ";
        cin>>a>>h;
    }
    void cal_volume()
    {
        vol_box=r*a*h;
    }
    void display()
    {
        cout<<"Area of circle = "<<area_circle<<endl;
        cout<<"Volume of box = "<<vol_box<<endl;
    }
};
int main()
{
    rectangle ob1;
    box ob2;
    ob1.cal_area_circle();
    ob1.cal_area_rectangle();
    ob2.cal_area_circle();
    ob2.cal_volume();
    ob1.display();
    ob2.display();
    return 0;
}