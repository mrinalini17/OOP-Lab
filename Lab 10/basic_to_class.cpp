#include<iostream>
using namespace std;
class test{
    int a;
    float b;
    public:
    test(int x){
        a=x;
        b=x*5.5;
    }
    test(float y){
        b=y;
        a=5;
    }
    void show(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
int main(){
    int m=10;
    float n=2.5;
    test t1=m;
    test t2=n;
    t1.show();
    t2.show(); 
}