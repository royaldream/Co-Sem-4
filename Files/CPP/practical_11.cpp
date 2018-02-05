#include<iostream>
using namespace std;
class Compare
{
    int a,b;
    public:
    void display(string mes);
    void largest();
    void getdata();
};
void Compare :: display(string mes)
{
    cout<<endl<<mes;
}
void Compare :: largest()
{
    string mes;
    if(a>b)
    {
        mes="\n A is Greater Then B . \n";
    }
    else if(a==b)
    {
        mes="\n A is Equal To B .\n";
    }
    else{
        mes="\n B is Greater Then A .\n";
    }
    display(mes);

}

void Compare :: getdata()
{
    cout<<"Enter Your Two Number :- ";
    cin>>a>>b;
    largest();

}
int main()
{
    Compare cmp;
    cmp.getdata();
    return 0;
}
