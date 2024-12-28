#include<iostream>
using namespace std;
class midsem
{
    protected:
    char name[30];
    int rollno;
    int midsem_marks[5];
};
class endsem : public midsem
{
    protected:
    int endsem_marks[5];
    int total,avg;
    char grade;
    public:
    void getdata()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"\nEnter roll no. : ";
        cin>>rollno;
        cout<<"\nEnter midsem marks out of 40 in 5 subjects : ";
        for(int i=0;i<5;i++)
        cin>>midsem_marks[i];
        cout<<"\nEnter endsem marks out of 60 in 5 subjects : ";
        for(int i=0;i<5;i++)
        cin>>endsem_marks[i];
    }
    void cal_grade()
    {
        total=0;
        for(int i=0;i<5;i++)
        total=total+midsem_marks[i]+endsem_marks[i];
        avg=total/5;
    }
    void display()
    {
        if(avg>90)
        grade='A';
        else if(avg>80&&avg<=90)
        grade='B';
        else if(avg>70&&avg<=80)
        grade='C';
        else
        grade='D';
        cout<<"Total = "<<total<<endl;
        cout<<"Average = "<<avg<<endl;
        cout<<"Grade = "<<grade<<endl;
    }
};
int main()
{
    endsem ob[5];
    for(int i=0;i<5;i++)
    {ob[i].getdata();
    ob[i].cal_grade();
    ob[i].display();}
    return 0;
}