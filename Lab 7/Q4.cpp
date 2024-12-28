/*(Multipath Inheritance) Design a base class called Student with two fields:- (i) Name (ii) roll
number. Derive two classes called Sports and Exam from the Student base class. Class Sports
has a field called s_grade and class Exam has a field called e_grade which are integer fields.
Derive a class called Results which inherit from Sports and Exam. This class has a character
array or string field to represent the final result. Also it has a member function called display
which can be used to display the final result. Illustrate the usage of these classes in main.*/
#include<iostream>
using namespace std;
class student
{
    protected:
    char name[30];
    int rollno;
    public:
    student()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter Roll No. : ";
        cin>>rollno;
    }
};
class sports : virtual public student
{
    protected:
    int s_grade;
    public:
    sports()
    {
        cout<<"Enter score in sports out of 40 : ";
        cin>>s_grade;
    }
};
class exam : virtual public student
{
    protected :
    int e_grade;
    public:
    exam()
    {
        cout<<"Enter score in exam out of 60 : ";
        cin>>e_grade;
    }
};
class results : public sports,public exam
{
    protected:
    char a[3];
    public:
    void result()
    {
        if(s_grade>30)
        {if(e_grade>50)
        {
            a[0]='A';
            a[1]='A';
            a[2]='A';
        }
        else
        {
            a[0]='A';
            a[1]='B';
            a[2]='B';
        }}
        else
        {if(e_grade>50)
        {   a[0]='B';
            a[1]='A';
            a[2]='B';
        }
        else
        {
            a[0]='B';
            a[1]='B';
            a[2]='C';
        }}
    }
    void display()
    {
        cout<<"Score in Sports = "<<s_grade<<" Grade = "<<a[0]<<endl;
        cout<<"Score in Exam = "<<e_grade<<" Grade = "<<a[1]<<endl;
        cout<<"Overall Score = "<<s_grade+e_grade<<" Overall grade = "<<a[2]<<endl;
    }
};
int main()
{
    results ob;
    ob.result();
    ob.display();
    return 0;
}