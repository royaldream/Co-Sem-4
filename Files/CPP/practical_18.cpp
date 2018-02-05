#include<iostream>
using namespace std;

class Add
{
    int a,b,c;

    public:
    Add(int,int);
    Add(int,int,int);
    Add();

};
Add :: Add(){};
Add :: Add(int a,int b)
{
    cout<<"Sum :- "<<a+b<<endl;
}

Add :: Add(int a,int b,int c)
{
    cout<<"Sum :- "<<a+b+c<<endl;
}

int main()
{

    int n;

user:
    cout<<"------------Menu------------\n";
    cout<<"1 : Add Two Number \n2 : Add Three Number\n0 : Exit\n";
    cin>>n;

    int a=0,b=0,c=0;

    switch(n)
    {
        case 1: cout<<"\nEnter Your Two Number : ";
                cin>>a>>b;
                Add(a,b);
                goto user;
        case 0: break;
        case 2: cout<<"\nEnter Your Three Number : ";
                cin>>a>>b>>c;
                Add(a,b,c);goto user;
    }
    return 0;

}
