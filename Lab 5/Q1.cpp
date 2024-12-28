/*Write a program to find out the area of an rectangle through friend function and member
function separately of Rectangle class.*/

#include <iostream>
#include <string>
using namespace std;

class rectangle
{
    int length, breadth;

    public:
    rectangle(int length, int breadth) : length(length), breadth(breadth)
    {}
    friend void calcArea(rectangle s); 
};

void calcArea(rectangle s){
    cout << "Area of Rectangle = " << s.length * s.breadth;
}

int main(){
    int len, bdth;
    cout << "Enter length and breadth: ";
    cin >> len >> bdth;
    rectangle s(len, bdth);
    calcArea(s);
    return 0;
}