#include<iostream>
using namespace std;
class a;
class b
{
    int num;
    public:
    b(int x)
    {
        num=x;
    }
    void friend greatest(a a1,b b1);
};
 
class a
{
    private:
    int num;
    public:
    a(int x)
    {
        num=x;
    }
    void friend greatest(a a1,b b1);
};
 
void greatest(a a1,b b1)
{
    if(a1.num>b1.num)
    {
        cout<<"\n Number in class A is greatest i.e. "<<a1.num;
    }
    else if(a1.num<b1.num)
    {
        cout<<"\n Number in class B is greatest i.e. "<<b1.num;
    }
    else
    {
        cout<<"\n Number in both classes are equal";
    }
}
 
int main()
{
    cout<<"\n\n Program to find greatest of two numbers in two different classes using friend function";
    int num;
 
    cout<<"\n\n Enter number for class A - ";
    cin>>num;
    a a1(num);
 
    cout<<"\n Enter number for class B - ";
    cin>>num;
    b b1(num);
 
    greatest(a1,b1);
    cout<<"\n";
 
    return 0;
}