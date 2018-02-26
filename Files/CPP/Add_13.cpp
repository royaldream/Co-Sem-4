#include<iostream>
using namespace std;

class Dist
{
    float feet,inch;

    public:

    void setdata()
    {
        feet=1;
        inch=5;
        cout<<"Predefined Value : "<<feet<<"'"<<inch<<"''"<<endl;

    }

    void getdata()
    {
        cout<<"Enter the feet : \n";
        cin>>feet;
        cout<<"Enter the inch : \n";
        cin>>inch;
    }

    void putdata()
    {
        cout<<"Total Distance : "<<feet<<"'"<<inch<<"''"<<endl;
    }

    void add_Dist(Dist t1,Dist t2)
    {
        feet=t1.feet+t2.feet;
        if(t1.inch+t2.inch>=12)
        {
            feet++;
            inch=t1.inch+t2.inch-12;
        }
        else
        {
            inch=t1.inch+t2.inch;
        }
    }
    Dist add_Dist(Dist t2)
    {
        Dist t3;
        t3.feet=feet+t2.feet;
        if(inch+t2.inch>=12)
        {
            t3.feet++;
            t3.inch=inch+t2.inch-12;
        }
        else
        {
            t3.inch=inch+t2.inch;
        }
        return(t3);
    }
};

int main()
{
    Dist t3,t1,t2,t;
    t.setdata();
    t1.getdata();
    t2.getdata();
     cout<<"Without returning : \n";
    t3.add_Dist(t1,t2);
    t3.putdata();
    cout<<"With returning : \n";

    t3=t1.add_Dist(t2);
    t3.putdata();
    return 0;
}

