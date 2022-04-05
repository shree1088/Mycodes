#include<iostream>
using namespace std;
int main()
{
    int a[10],max,min,i;
    cout<<"Enter the Elements"<<endl;
    for(i=0;i,10;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<"Maximum Value is"<<max<<endl;
    min=a[0];
    for(i=0;i<10;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<"Minimum value is"<<min<<endl;
}