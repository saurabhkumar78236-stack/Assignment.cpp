#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i,item1, item2, pos,n;
    cout<<"Enter the size of the array:";
    cin>> n;
    cout<<"Enter the elements:";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    //insection at the end
    cout<<"enter the element you want to insert:";
    cin>>item1;
    a[n]=item1;
    n=n+1;
    cout<<"Array after insection:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    //insection at specific point
    cout<<"enter the position where you want to insert:";
    cin>>pos;
    cout<<"enter the element you want to insert:";
    cin>>item2;
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=item2;
    n=n+1;
    cout<<"Array after insection:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}