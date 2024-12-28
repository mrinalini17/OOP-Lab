#include<iostream>
using namespace std;
class test
{
    private:
    int a,b;
    public:
    friend istream& operator>>(istream &,test &);
    friend ostream& operator<<(ostream &,test &);
};
istream& operator>>(istream &in,test &t1)
{
    in>>t1.a;
    in>>t1.b;
    return in;
}
ostream& operator<<(ostream &out,test &t1)
{
    out<<t1.a<<endl;
    out<<t1.b<<endl;
    return out;
}
int main()
{
    test t1;
    cout<<"Enter a and b : ";
    cin>>t1;
    cout<<t1<<endl;
    
}