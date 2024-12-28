/*Write a program using copy constructor to copy data of an object to another object.*/
#include <iostream>
//using namespace std;
class copy{
    private:
    int x,y;
    public:
    copy();
    copy(int,int);
    copy(copy &obj);
    void display();
};
copy::copy(){
    x=0;y=0;}
copy::copy(int a,int b){
    x=a;
    y=b;}
copy::copy(copy &obj){
    x=obj.x;
    y=obj.y;}
void copy::display(){
    std::cout<<"the given numbers are "<<x<<" and "<<y;}
int main(){
    copy ob1(1,2);
    copy ob2(ob1);
    ob2.display();
    return 0;
}