//Program to add two complex numbers

#include<iostream>
using namespace std;
class test
{
    private:
        int x,y;
    public:
        void input();
        void display();
        void add(test,test);
};
void test::input()
{
    cout<<"Enter the real part ";
    cin>>x;
    cout<<"Enter the imaginary part ";
    cin>>y;
}
void test::display()
{
    cout<<"x = "<<x<<" + "<<y<<"i"<<endl;
}
void test::add(test ob1,test ob2)
{
    x=ob1.x + ob2.x;
    y=ob1.y + ob2.y;
}
int main(){
    test ob1,ob2,ob3;
    ob1.input();
    ob2.input();
    ob3.add(ob1,ob2);
    cout<<"Sum : "<<endl;
    ob3.display();
    return 0;
}