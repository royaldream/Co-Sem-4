#include<iostream>
using namespace std;
class rational
{
    public:
    rational(){num=den=1;}
    rational operator +(rational &r)
    {
        rational r1;
        r1.num=num*r.den+r.num*den;
        r1.den=den*r.den;
        return r1;
    }
    rational operator /(rational &r)
    {
        rational r1;
        r1.num=num*r.den;
        r1.den=den*r.num;
        return r1;

    }
    rational operator *(rational &r)
    {
        rational r1;
        r1.num=num*r.num;
        r1.den=den*r.den;
        return r1;

    }
    rational operator -(rational &r)
    {
        rational r1;
        r1.num=num*r.den-r.num*den;
        r1.den=den*r.den;
        return r1;

    }
    void getdata()
    {
        cout<<"Enter Your Num :-  ";
        cin>>num>>den;
    }
    void putdata()
    {
        cout<<"Your Num is "<<num<<"/\t"<<den<<endl;
    }

    private :
    int num;  //numerator
    int den; //denominator
};

int main()
{
    rational r1,r2,r3;
    r1.getdata();
    r2.getdata();
    cout<<"\n----------Addition--------------\n";
    r3=r1+r2;
    r3.putdata();
    cout<<"\n----------Division--------------\n";
    r3=r1/r2;
    r3.putdata();
    cout<<"\n----------Multiplication--------\n";
    r3=r1*r2;
    r3.putdata();
    cout<<"\n----------Subtraction-----------\n";
    r3=r1-r2;
    r3.putdata();



}
