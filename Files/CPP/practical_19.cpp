#include<iostream>
using namespace std;
class ABC
{
    int x;
    public:
    ABC()
    {
        x=0;
    }
    ABC(int a)
    {
        x=a;
    }
    ABC(ABC &abc)
    {
        x=abc.x;
    }
    void putdata()
    {
        cout<<"Value is :- "<<x<<endl;
    }
};
int main()
{
    ABC a,b(46);
    a=ABC(b);
    a.putdata();

}
