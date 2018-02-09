#include<iostream>
using namespace std;
class t24;
enum D{AM=1,PM};
class t12
{

    public :
        int min,hour;
    D d;
    int i;
    t12()
    {
        min=12;
        hour=12;
        d=D(1);
    }
    void getdata()
    {   cout<<"Enter Time in 12 Hour Format  : ";
        cin>>hour>>min>>i;
        if(i==1)
        {
            d=D(1);
        }else
        {
            d=D(2);
        }
    }
    void putdata()
    {
        cout<<"T12 Time Format is :- "<<hour<<" : "<<min<<"  "<<d<<endl;
    }
    friend void convert(t12 &,t24&,int);
};
class t24
{

    public :
        int min,hour;
    t24()
    {
        min=24;
        hour=24;
    }
    void getdata()
    {   cout<<"Enter Time in 24 Hour Format  : ";
        cin>>hour>>min;
    }
    void putdata()
    {
        cout<<"T24 Time Format is :- "<<hour<<" : "<<min<<"\n";
    }
    friend void convert(t12 &,t24&,int);
};

void convert(t12 &t12,t24 &t24,int a)
{
    if(a==0)
    {
        if (t12.i==1)
        {
            t24.hour=t12.hour;
            t24.min=t12.min;
        }
        else if(t12.i==2)
        {
            t24.hour=t12.hour+12;
            t24.min=t12.min;
        }
    }
    else
    {
        if(t24.hour>12)
        {
            t12.d=D(2);
            t12.hour=t24.hour%12;
        }
        else
        {
            t12.d=D(1);
            t12.hour=t24.hour;
        }

        t12.min=t24.min;

    }
}
int main()
{
    t12 t1;
    t24 t2;


    int n;
    USER:
    cout<<"\nMenu\n1 : 12 Hour Format\n2 : 24 Hour Format \n0: Exit\n";
    cin>>n;
    switch(n)
    {
        case 1:
        t2.getdata();
        convert(t1,t2,1);
        t1.putdata();
        //cout<<t1.hour<<endl;
        goto USER;
        case 2 :
        t1.getdata();
        convert(t1,t2,0);
        t2.putdata();
        //cout<<t2.hour<<endl;
        goto USER;
        case 0:
         break;
         }

}
