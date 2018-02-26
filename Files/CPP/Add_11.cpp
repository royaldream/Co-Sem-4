#include<iostream>
#include<string.h>
using namespace std;

class bank
{
  public :
  string name;
  int an;
  string type;
  int bal;
  void gd();
  void dp();
  void wd();
  void di();
};
int k=0;
void bank :: gd()
{
        an=0+k;
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter type"<<endl;
        cin>>type;
        bal=0;
        cout<<"Account Number"<<endl<<an<<endl;
}

void bank :: dp()
{
    int n;
    cout<<"Enter deposit"<<endl;
    cin>>n;
    bal=n+bal;
}

void bank :: wd()
{
    int n;
    cout<<"Enter Amount"<<endl;
    cin>>n;
    bal=bal-n;
}

void bank :: di()
{
    cout<<name<<endl;
    cout<<bal<<endl;
}

int main()
{
    bank b[100];
    cout<<"1.New Account\n2.Deposit\n3.Withdraw\n4.Display\n0.EXIT\n";
    int n,l;
    cin>>n;
    while(n!=0)
    {
        switch(n)
        {
            case 1 : k++;
                    b[k].gd();
                     break;

            case 2 : cout<<"Enter Account Number"<<endl;
                     cin>>l;
                     b[l].dp();
                     break;

            case 3 : cout<<"Enter Account Number"<<endl;
                     cin>>l;
                     b[l].wd();
                     break;

            case 4 : cout<<"Enter Account Number"<<endl;
                     cin>>l;
                     b[l].di();
                     break;

        }
        cout<<"1.New Account\n2.Deposit\n3.Withdraw\n4.Display\n0.EXIT\n";
        cin>>n;
    }
}
