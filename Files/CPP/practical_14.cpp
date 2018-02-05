#include<iostream>
using namespace std;

class TIME
{
    int hour,min;
    public :
    void setdata();
    void getdata();
    void putdata();
    void addTime(TIME t1,TIME t2);
    TIME addTime(TIME t2);
};

//Class Variable function

void TIME :: addTime(TIME t1,TIME t2)
{
    hour=t1.hour+t2.hour;
    min=t1.min+t2.min;
}

TIME TIME :: addTime(TIME t2)
{
    TIME t3;
    t3.hour=hour+t2.hour;
    t3.min=min+t2.min;
    return t3;
}

void TIME :: setdata()
{
    hour=24;
    min=24;
    cout<<"\n------------Your TIME Details ------------\n";
    cout<<"TIME :- "<<hour;
    cout<<":"<<min;
}
void TIME :: getdata()
{
    cout<<"\n------------Enter Your TIME Details ------------\n";
    cout<<"TIME Hour :- ";
    cin>>hour;
    cout<<"TIME Min :- ";
    cin>>min;
}
void TIME :: putdata()
{
    cout<<"\n------------Your TIME Details ------------\n";
    cout<<"TIME : "<<hour;
    cout<<":"<<min;
}
int main()
{
    TIME t1,t2,t3;

    t1.setdata();
    t1.getdata();
    t2.setdata();
    t2.getdata();
    t1.putdata();
    t2.putdata();
    cout<<"\nTime Addition WithOut Return Object\n";
    t3.addTime(t1,t2);
    t3.putdata();
    cout<<"\nTime Addition With Return Object\n";
    t3=t1.addTime(t2);
    t3.putdata();

    return 0;
}
