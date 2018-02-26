#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5];
    bool p=true;
    cout<<"Enter the Array A\n";
    int i;

    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
        cout<<"Enter the Array B\n";

    for(i=0;i<5;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<5;i++)
{
    if(a[i]==b[i])
    {
p=1;
    }else{
    p=0;
    }

}
    if(p==1)
    cout<<"Equal\n";
    else
    cout<<"Not Equal";
}
