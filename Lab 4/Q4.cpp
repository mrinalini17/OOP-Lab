//Program to perform subtraction of 2 time objects

#include<iostream>
using namespace std;
class test
{
    private:
        int x,y;
    public:
        void input();
        void display();
        void diff(test,test);
};
void test::input()
{
    cout<<"Hours: ";
    cin>>x;
    cout<<"Minutes: ";
    cin>>y;
}
void test::display()
{
    cout<<x<<"Hours "<<y<<"Mins"<<endl;
}
void test::diff(test ob1,test ob2)
{
    if(ob1.x>ob2.x){
        if(ob1.y>ob2.y){
            x=ob1.x-ob2.x;
            y=ob1.y-ob2.y;
    }
        else{
            x=ob1.x-ob2.x-1;
            y=ob1.y+60-ob2.y;
        }
    }
    else{
        if(ob1.y>ob2.y){
            x=ob1.x+24-ob2.x;
            y=ob1.y-ob2.y;
    }
        else{
            x=ob1.x-ob2.x-1;
            y=ob1.y+60-ob2.y;
        }
    }
}
int main(){
    test ob1,ob2,ob3;
    ob1.input();
    ob2.input();
    ob3.diff(ob1,ob2);
    cout<<"Difference = "<<endl;
    ob3.display();
    return 0;
}