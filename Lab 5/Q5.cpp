#include<iostream>
using namespace std;
class DB;
class DM
{
    private:
        int m,cm;
    public:
        void get_data(){
        cout<<"\nEnter meter value : ";
        cin>>m;
        cout<<"\nEnter centimeter value: ";
        cin>>cm;
      }
      friend float sum(DM a,DB b);
};
class DB
{
    private:
        int ft,in;
    public:
        void get_data(){
            cout<<"\nEnter feet value : ";
            cin>>ft;
            cout<<"\nEnter inches value : ";
            cin>>in;
            }
            friend float sum(DM a,DB b);
};
float sum(DM a,DB b)
{
    float x,y,z;
    x=(a.m+(a.cm/100));
    y=(b.ft+(b.in/12));
    z=(x+(y*0.304)); 
 return z;
}
int main()
{
    DM a;
    DB b;
    cout<<"\nEnter the value in meter and centimeter: ";
    a.get_data();
    cout<<"\nEnter the value in feet and inches: ";
    b.get_data();
    sum(a,b);
    cout<<"\nThe summed value in meter is: "<<sum(a,b);
}