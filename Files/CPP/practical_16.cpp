#include<iostream>
using namespace std;

class DEF;

class ABC
{
    int a;
    public:
    friend void Swap(ABC &,DEF &);
    friend void display(ABC,DEF);
    void getdata();
};

class DEF
{
    int x;
    public:
    void getdata();
    friend void Swap(ABC &,DEF &);
    friend void display(ABC,DEF);
};

//Friend Swap Fuction declaration
void Swap(ABC &abc,DEF &def)
{
    int temp;
    temp=abc.a;
    abc.a=def.x;
    def.x=temp;
    //display(abc,def);cout<<endl<<endl;1
}

void display(ABC abc,DEF def)
{
    cout<<"First Value : "<<abc.a<<endl<<"Second Value : "<<def.x;
}

void ABC::getdata()
{
    cout<<"\nEnter Your First Class int Value\n";
    cin>>a;
}
void DEF::getdata()
{
    cout<<"\nEnter Your Second Class int Value\n";
    cin>>x;
}
int main()
{
    ABC abc;
    DEF def;
    abc.getdata();
    def.getdata();

    Swap(abc,def);

    display(abc,def);
    //cout<<abc.a<<endl<<def.x;

}
