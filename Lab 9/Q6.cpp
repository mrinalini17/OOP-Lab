// Write a program add and multiply complex numbers using operator overloading
#include <iostream>
using namespace std;

class ComplexClass{
private:
    int real, imaginary;
public:
    ComplexClass(int r = 0, int i = 0){
        real = r;
        imaginary = i;
    }

    void display(){
        cout << real << " + " << imaginary << " i " << endl;
    }
    friend ComplexClass operator+(ComplexClass,ComplexClass);
    friend ComplexClass operator*(ComplexClass,ComplexClass);
};
ComplexClass operator+(ComplexClass comp1, ComplexClass comp2){
    ComplexClass tempClass;
    tempClass.real = comp1.real + comp2.real;
    tempClass.imaginary = comp1.imaginary + comp2.imaginary;

    return tempClass;
}
ComplexClass operator*(ComplexClass comp1, ComplexClass comp2){
    ComplexClass tempClass;
    tempClass.real = comp1.real * comp2.real;
    tempClass.imaginary = comp1.imaginary * comp2.imaginary;

    return tempClass;
}
int main(){
    ComplexClass t1(10, 5), t2(3, 2), t3, t4;
    t1.display();
    t3 = t1 + t2;
    t4 = t1 * t2;
    t3.display();
    t4.display();
    return 0;
}