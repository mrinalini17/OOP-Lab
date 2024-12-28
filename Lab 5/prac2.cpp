//coversion of temp from F to C

#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int f;
    public:
        void input()
        {
            cout<<"Enter temp in f";
            cin>>f;
        }
        void convert(B);
};
class B
{
    private:
        int c;
    friend void A::convert(B);
};
void A::convert(B obj)
{
    obj.c=((5)*(f-32))/9;
    cout<<"Temp in c "<<obj.c;
}
int main(){
    A obj1;
    B obj2;
    obj1.input();
    obj1.convert(obj2);
    return 0;
}