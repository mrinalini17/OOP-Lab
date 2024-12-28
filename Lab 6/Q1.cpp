/*Write a program to perform addition of two complex numbers using constructor. Complex
numbers are given through user input.*/
#include <iostream>
using namespace std;
class complex
{
    private:
    int x,y;
    public : 
    complex ()
    {cout<<"Enter the real part ";
    cin>>x;
    cout<<"Enter the imaginary part ";
    cin>>y;}
    complex (complex ob1,complex ob2)
    {x=ob1.x+ob2.x;
    y=ob1.y+ob2.y;}
    void display()
    {cout<<x<<" + "<<y<<"i"<<endl;}
};
int main()
{
    complex obj1,obj2;
    complex obj3=complex(obj1,obj2);
    obj3.display();
    return 0;
}