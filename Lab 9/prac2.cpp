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
    void operator==(test &t2)
    {
        if(a==t2.a)
        cout<<"Given inputs are equal"<<endl;
        else
        cout<<"Given inputs are not equal"<<endl;
    }
};
int main()
{
    test t1(5),t2(5);
    t1==(t2);
    return 0;
}