/*(Multilevel Inheritance) Modify the program no. LE6.1 as follows:
Derive a class named as BOX from RECTANGLE class. Take necessary data & member
functions for this box class to calculate the volume of the box. All the data members are
initialized through the constructors. Show the result by accessing the area method of circle
and rectangle and the volume method of box class through the objects of box class.*/
#include<iostream>
using namespace std;
class circle
{
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
    void cal_area_rectangle()
    {
        area_rectangle=r*b;
    }
};
class box : public rectangle
{
    protected:
    int h;
    int vol_box;
    public:
    box()
    {
        cout<<"Enter radius/length of circle/rectangle : ";
        cin>>r;
        cout<<"Enter breadth of rectangle : ";
        cin>>b;
        cout<<"Enter height of box : ";
        cin>>h;
    }
    void cal_volume()
    {
        vol_box=r*b*h;
    }
    void display()
    {
        cout<<"Area of circle = "<<area_circle<<endl;
        cout<<"Area of rectangle = "<<area_rectangle<<endl;
        cout<<"Volume of box = "<<vol_box<<endl;
    }
};
int main()
{
    box ob;
    ob.cal_area_circle();
    ob.cal_area_rectangle();
    ob.cal_volume();
    ob.display();
    return 0;
}