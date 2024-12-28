#include<iostream>
using namespace std;

class test
{
    private:
    int *p;
    int n;
    public:
    test(int size)
    {
        n = size;
        p=new int[n];
        cout<<"Enter array elements: ";
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
    }
    void disp_arr()
    {
        cout<<"\nArray elements \n";
        for(int i=0;i<n;i++)
        {
            cout<<p[i]<<"\t";
        }
    }
};

int main()
{
    test ob1(5);
    test ob2(10);
    ob1.disp_arr();
    ob2.disp_arr();
    return 0;
}