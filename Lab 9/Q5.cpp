//Write a program to design a class representing complex numbers and having functionality of
//performing addition and multiplication of two complex numbers using operator overloading.
#include <iostream>
using namespace std;
class ComplexClass
{
private:
    int real, imaginary;

public:
    ComplexClass(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }
    ComplexClass operator+(ComplexClass comp2)
    {
        ComplexClass tempClass;
        tempClass.real = real + comp2.real;
        tempClass.imaginary = imaginary + comp2.imaginary;

        return tempClass;
    }

    ComplexClass operator*(ComplexClass comp2)
    {
        ComplexClass tempClass;
        tempClass.real = real * comp2.real;
        tempClass.imaginary = imaginary * comp2.imaginary;

        return tempClass;
    }
    void display()
    {
        cout << real << " + " << imaginary << " i " << endl;
    }
};

int main()
{
    ComplexClass t1(10, 5), t2(3, 2), t3, t4;
    t1.display();

    t3 = t1 + t2;
    t4 = t1 * t2;

    t3.display();
    t4.display();

    return 0;
}

