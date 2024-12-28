/*Create a class called 'TIME' that has three integer data members for hours, minutes and
seconds, a constructor to initialize the object to some constant value, member function to
add two TIME objects, member function to display time in HH:MM:SS format. Write a main
function to create two TIME objects, add them and display the result in HH:MM:SS format.*/
#include<iostream>
using namespace std;
class time
{
    private:
    int hour,min,sec;
    public:
    time()
    {
        hour=min=sec=0;
    }
    time(int h,int m,int s)
    {
        hour=h;
        min=m;
        sec=s;
    }
    friend time add(time,time);
    void display()
    {
        cout<<hour<<" : "<<min<<" : "<<sec;
    }
};
time add(time ob1,time ob2)
{
    time ob3;
    ob3.hour=ob1.hour+ob2.hour;
    ob3.min=ob1.min+ob2.min;
    ob3.sec=ob1.sec+ob2.sec;
    if(ob3.min>=60)
    {if(ob3.sec>=60)
    {ob3.sec=ob3.sec-60;
    ob3.min=ob3.min-59;
    ob3.hour=ob3.hour+1;}}
    else
    {if(ob3.sec>=60)
    {ob3.sec=ob3.sec-60;
    ob3.min=ob3.min+1;}}
    return ob3;
}
int main()
{
    time ob1(7,26,52);
    time ob2(3,34,26);
    time ob3;
    ob3=add(ob1,ob2);
    ob3.display();
    return 0;
}