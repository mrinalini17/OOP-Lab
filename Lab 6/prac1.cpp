#include<iostream>
using namespace std;
class timee
{
    private:
        int hr,min,s,day=0;
    public:
        timee()
        {
            hr=min=s=0;
        }
        timee(int h,int m,int a)
        {
            hr=h;
            this->min=m;
            this->s=a;
        }
        friend timee add_time(timee,timee);
        void disp_time()
        {
            cout<<hr<<" : "<<min<<" : "<<s;
        }
};
timee add_time(timee ob1,timee ob2){
    timee ob3;
    ob3.hr=ob1.hr+ob2.hr;
    ob3.min=ob1.min+ob2.min;
    ob3.s=ob1.s+ob2.s;
    if(ob3.s>=60){
        ob3.s=ob3.s-60;
        ob3.min++;
    }
    if(ob3.min>=60){
        ob3.min=ob3.min-60;
        ob3.hr++;
    }
    if(ob3.hr>=24){
        ob3.hr=ob3.hr-24;
        ob3.day++;
    }
    return ob3;
}
int main(){
    timee obj1(4,30,45);
    timee obj2(2,25,15);
    timee obj3;
    obj3=add_time(obj1,obj2);
    cout<<"\n Time 1: \t";
    obj1.disp_time();
    cout<<"\n Time 2: \t";
    obj2.disp_time();
    cout<<"\n Time 1+Time 2 = ";
    obj3.disp_time();
    return 0;
}