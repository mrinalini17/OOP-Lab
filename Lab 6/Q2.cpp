/*Write a program to perform addition of two complex numbers using constructor overloading.
The first constructor which takes no argument is used to create objects which are not
initialized, second which takes one argument is used to initialize real and imaginary parts to
equal values and third which takes two argument is used to initialize real and imaginary to
two different values.*/
#include <iostream>
using namespace std;
class complex
{
    private:
    int x,y;
    public : 
    complex()
    {}
    complex(complex &)
    {cout<<"Enter the real part ";
    cin>>x;
    cout<<"Enter the imaginary part ";
    cin>>y;}
    complex(complex ob1,complex ob2)
    {x=ob1.x+ob2.x;
    y=ob1.y+ob2.y;}
    void display()
    {cout<<x<<" + "<<y<<"i"<<endl;}
};
int main()
{
    complex obj1,obj2;
    complex obj3;
    obj3=complex(obj1,obj2);
    obj3.display();
    return 0;
}