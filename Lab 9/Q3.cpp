//Write a program to overload unary (++) operator and unary (--) operator.
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
    void operator++(int)
    {
        a++;
        b++;
    }
    void operator--(int)
    {
        a--;
        b--;
    }
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
int main()
{
    test t1(4,4),t2(2,2);
    t1++;
    t2--;
    t1.display();
    t2.display();
    return 0;
}