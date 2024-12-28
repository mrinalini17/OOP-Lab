//Write a program to overload new and delete operator.
#include <iostream>
using namespace std;
class student{
private:
    string name;
public:
    student(string n = "Saheb"){
        name = n;
    }
    void display(){
        cout << "Name:" << name << endl;
    }
    void *operator new(size_t size){
        void * p = malloc(size);
        cout<<"Memory allocated"<<endl;
        return p;
    }
    void operator delete(void *p){
        free(p);
        cout<<"Memory Deallocated";
    }
};
int main(){
    student *p = new student("Mrinalini");
    p->display();
    delete p;
}