#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int a,b;
    public:
        void input()
        {
            cout<<"Enter a and b";
            cin>>a>>b;
        }
        void show(B);
};
class B
{
    private:
        int c;
    friend class A;
};
void A::show(B obj)
{
    obj.c=a+b;
    cout<<a<<" + "<<b<<" = "<<obj.c;
}
int main(){
    A obj1;
    B obj2;
    obj1.input();
    obj1.show(obj2);
    return 0;
}