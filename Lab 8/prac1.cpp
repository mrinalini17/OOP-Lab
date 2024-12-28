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
    cout<<"Enter the marks in 5 subjects ";
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
}
}
int main(){
    result ob;
    ob.getdata();
    ob.display();
}