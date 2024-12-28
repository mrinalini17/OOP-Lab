#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class rectangle{
    private:
        int len,bre;
    public:
        rectangle(int len,int bre):len(len),bre(bre)
    {}
    friend void area(rectangle s);
};
class square
{
    public:
    void displayq();
};
void displayq(int i)
{
    cout<<"The area of the square is : "<<i*i;
    getch();
}
void area(rectangle s)
{
    cout<<"Area of Rectangle = "<<s.len*s.bre<<endl;
}
int main(){
    int len,bdth,i;
    cout<<"Enter length and breadth: ";
    cin>>len>>bdth;
    rectangle s(len,bdth);
    area(s);
    cout<<"Enter side of the square: ";
    cin>>i;
    displayq(i);
    return 0;
}