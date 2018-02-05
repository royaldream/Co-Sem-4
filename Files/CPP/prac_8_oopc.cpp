#include<iostream>
using namespace std;

int volume(float l)
{
    cout<<"volume = "<<l*l*l<<endl;
}

int volume(float r,float h)
{
    cout<<"volume = "<<3.14*r*r*h<<endl;
}

int volume(float l,float b,float h)\
{
    cout<<"volume ="<<l*b*h<<endl;
}

int main()
{
    int n;
    cout<<"MENU\n1.CUBE\n2.CYLINDER\n3.RECTANGLE\n0.EXIT\n";
    cin>>n;
    while(n!=0)
    {
    switch(n)
    {
        case 1 :float l;
                cout<<"enter side"<<endl;
                cin>>l;
                volume(l);
                break;

        case 2 :float r,h;
                cout<<"enter radius then heigth"<<endl;
                cin>>r>>h;
                volume(r,h);
                break;

        case 3 :float b;
                cout<<"enter length , width , height"<<endl;
                cin>>l>>b>>h;
                volume(l,b,h);
                break;
    }
    cin>>n;
    }
}
