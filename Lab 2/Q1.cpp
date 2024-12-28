#include <iostream>

using namespace std;

void sum(int m,int *q){
    int c=0;
    for(int i=0;i<m;i++){
        c+=q[i];
    }
    cout<<"\nSum of the elements is: "<<c<<endl;
}

void search(int m,int *q){
    int a;
    cout<<"\nWhich element to you want to find?\n";
    cin>>a;
    for(int i=0;i<m;i++){
        if(a==q[i]){
            cout<<a<<" is the ["<<i+1<<"] element of the array"<<endl;
        }
    }
}

void eosum(int m,int *q){
    int o=0,e=0;
    for(int i=0;i<m;i++){
        if(q[i]%2==0){
            e+=q[i];
        }
        else
            o+=q[i];
        }
        cout<<"\nSum of even numbers is "<<e<<endl;
        cout<<"Sum of odd numbers is "<<o<<endl;
    }
void modify(int m,int*q){
    int x;
    cout<<"\n";
    for(int i=0;i<m;i++){
        cout<<"Multiply ["<<i+1<<"] with: ";
        cin>>x;
        q[i]=(x*q[i]);
    }
    cout<<"Modified array: \n";
        for(int i=0;i<m;i++){
            cout<<q[i]<<" ";
    }
}
void sort(int m,int *q){
    int a[m];
    int *p=a;
    cout<<"\n\nArray after Sorting: ";
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(q[i]>q[j]){
                int b=q[i];
                q[i]=q[j];
                q[j]=b;
            }
        }
    }
    for(int i=0;i<m;i++)
    cout<<q[i]<<" ";
}
void reverse(int m, int*q){
    cout<<"\n\nReverse Array : ";
    for(int i=m-1;i>=0;i--)
    cout<<q[i]<<" ";
}
void merge(int n,int *p,int m,int *q)
{   
    int a3[m+n];
    int i,j;
    int *s=a3;
    for(i=0;i<n;i++)
    *(s+i)=*(p+i);
    for(i=n,j=0;i<m+n,j<m;i++,j++)
    *(s+i)=*(q+j);
    cout<<"\nMerged Array : ";
    for(i=0;i<m+n;i++)
    cout<<*(s+i)<<" ";
}
int main(){
    int n;
    cout<<"\nEnter the number of elements : ";
    cin>>n;
    int a1[n];
    int *p=a1;
    cout<<"Enter the elements of array 1 : "; 
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    cout<<"The array elements : ";
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    sum(n,p);
    search(n,p);
    eosum(n,p);
    modify(n,p);
    sort(n,p);
    reverse(n,p);
    cout<<"\n\nEnter the number of elements in array 2 : ";
    int m;
    cin>>m;
    int a2[m];
    int *r=a2;
    cout<<"Enter the elements of array 2 : ";
    for(int i=0;i<n;i++)
    cin>>*(r+i);
    merge(n,p,m,r);
    return 0;
}
