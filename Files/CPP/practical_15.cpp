#include<iostream>
using namespace std;

class DEF;

class ABC
{   int a;

    public:
    friend void Max(ABC,DEF);
    void getdata();
};

class DEF
{   int x;

    public:
    void getdata();
    friend void Max(ABC,DEF);
};

//Friend Maximum Fuction declaration
void Max(ABC abc,DEF def)
{
    if(abc.a>def.x)
    {
        cout<<"\nABC Class Variable Maximum "<<abc.a;
        cout<<endl;
    }
    else
    {
        cout<<"\nDEF Class Variable Maximum "<<def.x;
        cout<<endl;
    }

}
void ABC::getdata()
{
    cout<<"\nEnter Your ABC Class int Value\n";
    cin>>a;
}
void DEF::getdata()
{
    cout<<"\nEnter Your DEF Class int Value\n";
    cin>>x;
}
int main()
{
    ABC abc;
    DEF def;
    abc.getdata();
    def.getdata();
    Max(abc,def);

}
