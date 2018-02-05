#include<iostream>
using namespace std;

class SPACE
{
    int x,z,y;
    public:

    SPACE(){x=y=z=0;}
    void operator -();
    friend SPACE operator -(SPACE &);
    void getData()
    {
        cout<<"\nEnter Your X,Y,Z int Value\n";
        cin>>x>>y>>z;
    }
    void putData()
    {
        cout<<"\nYour X,Y,Z int Value is :";
        cout<<x<<"\t"<<y<<"\t"<<z<<endl;
    }


};

void SPACE :: operator -()
{
    x=-x;
    y=-y;
    z=-z;
}
SPACE  operator -(SPACE &s1)
{
    SPACE s;
    s.x=-s1.x;
    s.y=-s1.y;
    s.z=-s1.z;
    return s;

}
int main()
{
    SPACE s1,s2;
    s1.getData();
    -s1;
    s1.putData();
    s2=-s1;
    s2.putData();


}
