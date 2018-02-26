#include<iostream>
#define MAX(x,y)     (x > y ? x : y)
using namespace std;

inline int max(int x, int y) { return x > y ? x : y; }
int main()
{
    int x,y;
    cout<<"Enter Two Number : ";
    cin>>x>>y;
    cout<<"Macro Function \n";
    int highest = MAX(x,y);
    cout<<highest<<endl;
    cout<<"Inline Function \n";
    int h= max (x, y);
    cout<<h<<endl;

}
