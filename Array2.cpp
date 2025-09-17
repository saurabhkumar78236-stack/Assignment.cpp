#include<iostream>
using namespace std;
int main()
{
    int a[10], i ,size,pos;
    cout<<"enter the size pf the array:";
    cin>>size;
    cout<<"enter Array elements";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elements are";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<"\n";
    }
    cout<<"enter the position you want to delete from array";
    cin>>pos;
    for(i=pos;i<size;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    cout<<"Array elements after deletion";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}