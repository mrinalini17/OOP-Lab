/*Create a 'DISTANCE' class with the following members:
Data Members
b) feet and inches
Member Functions
d) To input distance through constructor
e) To output distance
f) To add two distance objects
Write a main function to create objects of DISTANCE class. Input two distances (one through
implicit call and other explicit call and output the sum.*/
#include <iostream>
class distance
{
    private:
    int feet;
    int inches;
    public:
    distance();
    distance(int,int);
    distance(distance,distance);
    void display();
};
distance::distance()
{
    feet=0;
    inches=0;
}
distance::distance(int a,int b)
{
    feet=a;
    inches=b;
}
distance::distance(distance ob1,distance ob2)
{
    feet=ob1.feet+ob2.feet;
    inches=ob1.inches+ob2.inches;
}
void distance::display()
{
    std::cout<<"The distance is "<<feet<<" feets and "<<inches<<" inches ";
}
int main()
{
    distance obj1(2,7);
    distance obj2(1,1);
    distance obj3=distance(obj1,obj2);
    obj3.display();
}