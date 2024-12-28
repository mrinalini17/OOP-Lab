//Write a program to overload unary (-) operator.
#include<iostream>
using namespace std;
class test
{
    private:
    int a;
    public:
    test(){
        a=0;
    }
    test(int x){
        a=x;
    }
    test operator-(){
        test t2;
        t2.a=-a;
        return t2;   
    }
    void display(){
        cout<<"a = "<<a<<endl;
    }
};
int main(){
    test t1(5);
    test t2=-t1;
    t1.display();
    t2.display();
    return 0;
}