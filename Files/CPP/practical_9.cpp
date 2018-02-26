#include<iostream>
using namespace std;
int inline multiple(int x,int y)
{
    return (x*y);
}
float inline divided(float x,float y)
{
    return (x/y);
}
int main()
{
    int a,b;
    cout<<"Enter Two Number A & B :- ";
    cin>>a>>b;
    int d;
    d=multiple(a,b);
    float f;
    f=divided(a,b);
    cout<<"Multiple Two Value : "<<d<<endl<<"Divided Two Value : "<<f<<endl;

}
