//Write a program to overload unary (-) operator using friend function
#include<iostream>
using namespace std;
class test
{
    private:
    int a;
    public:
    test()
    {
        a=0;
    }
    test(int x)
    {
        a=x;
    }
    friend test operator-(test &);
    void display()
    {
        cout<<"a = "<<a<<endl;
    }
};
test operator-(test &t1)
{
    test t2;
    t2.a=-t1.a;
    return t2;
}
int main()
{
    test t1(1);
    test t2=-(t1);
    t1.display();
    t2.display();
    return 0;
}