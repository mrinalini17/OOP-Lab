#include<iostream>
using namespace std;
class test{
    private:
    int a,b;
    public:
    test(int x,int y){
        a=x;
        b=y;
    }
    void operator ++(){
        ++a;
        ++b;
    }
    void operator ++(int){
        a++;
        b++;
    }
    void show(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
int main(){
    test t1(4,5);
    test t2(2,3);
    t1++;
    ++t2;
    t1.show();
    t2.show();
    return 0;
}