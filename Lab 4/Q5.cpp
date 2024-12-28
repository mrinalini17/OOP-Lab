/*Define a class named as FRACTION that contains two data members that represent the
numerator and denominator of a fraction. By defining necessary member functions, write a
program to add, subtract and multiply two fractions. The add accepts the objects using call-
by- value technique, subtract using call-by-reference and multiply using call-by-address
technique.*/
#include<iostream>
using namespace std;
class fraction
{
    private:
    int num;
    int den;
    public:
    void input();
    void add(fraction,fraction);
    void sub(fraction &,fraction &);
    void mul(fraction *,fraction *);
};
void fraction::input()
{
    cout<<"Enter numerator : ";
    cin>>num;
    cout<<"Enter denominator : ";
    cin>>den;
}
void fraction::add(fraction a,fraction b)
{
    num=(a.num*b.den)+(a.den*b.num);
    den=a.den*b.den;
    cout<<"Fraction after addition = "<<num<<"/"<<den<<endl;
}
void fraction::sub(fraction &a,fraction &b)
{
    num=(a.num*b.den)-(a.den*b.num);
    den=a.den*b.den;
    cout<<"Fraction after subtraction = "<<num<<"/"<<den<<endl;
}
void fraction::mul(fraction *a,fraction *b)
{
    num=a->num*b->num;
    den=a->den*b->den;
    cout<<"Fraction after multiplication = "<<num<<"/"<<den<<endl;
}
int main()
{
    fraction a,b,c;
    a.input();
    b.input();
    c.add(a,b);
    c.sub(a,b);
    c.mul(&a,&b);
    return 0;
}
