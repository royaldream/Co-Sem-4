#include<iostream>
using namespace std;

class Member
{
    static int a;
    public:
    static void putdata()
    {
        cout<<a<<endl;
        a++;
    }
};
int Member::a;
int main()
{
    for(int i=0;i<10;i++)
        Member :: putdata();
    return 0;
}
