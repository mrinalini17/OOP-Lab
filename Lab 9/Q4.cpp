//Write a program to overload unary (++) operator and unary (--) operator using friend function.
#include<iostream>
using namespace std;
class test
{
    private:
    int a,b;
    public:
    test(int x,int y)
    {
        a=x;
        b=y;
    }
    friend void operator++(test &);
    friend void operator--(test &);
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
void operator++(test &t2)
{
    ++t2.a;
    ++t2.b;
}
void operator--(test &t2)
{
    --t2.a;
    --t2.b;
}
int main()
{
    test t1(8,8),t2(2,2);
    ++t1;
    --t2;
    t1.display();
    t2.display();
    return 0;
}