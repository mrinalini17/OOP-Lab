/*(....in cont)Extend the program to derive a class result from test which include member function to
calculate total marks and percentage of a student. Input the data for a student and dislay the total 
marks and percentage.*/
#include <iostream>
using namespace std;
class student{
    protected: 
    char name[30];
    int age,roll,marks[5];
};
class result:public student{
    public:
    void getdata();
    void display();
};
void result::getdata(){
    cout<<"Enter the name ";
    cin>>name;
    cout<<"Enter roll ";
    cin>>roll;
    cout<<"Enter the age ";
    cin>>age;
    cout<<"Enter the marks in 5 subjects(out of 100)";
    for(int i=0;i<5;i++){
        cin>>marks[i];
}
}
void result::display(){
    cout<<"NAME: "<<name<<endl;
    cout<<"ROLL: "<<roll<<endl;
    cout<<"AGE: "<<age<<endl;
    cout<<"MARKS: "<<endl;
    for(int i=0;i<5;i++){
    cout<<marks[i]<<"\t";
    cout<<"TOTAL MARKS:"<<marks[0]+marks[1]+marks[2]+marks[3]+marks[4]<<endl;
    cout<<"PERCENTAGE: "<<(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5<<endl;
}
}
int main(){
    result ob;
    ob.getdata();
    ob.display();
}