#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    Test(){a=b=0;}
    void getdata()
    {
        cout<<"\nEnter Two Number : ";
        cin>>a>>b;
    }
    void putdata()
    {
        cout<<"\nTwo Number are : "<<a<<"&"<<b<<endl;
    }
    void setdata(int x,int y)
    {
        a=x;b=y;
    }

};
int main()
{
    Test t1,*t2;
    t2=new Test;
    t1.setdata(4,5);
    t1.putdata();
    t1.getdata();
    t1.putdata();


    t2->setdata(9,10);
    t2->putdata();
    t2->getdata();
    t2->putdata();

}
