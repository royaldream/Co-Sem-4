#include<iostream>
using namespace std;
template<class V>


void swa(V& n1,V& n2)
{
    V temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
int main()
{

    int a,b;
    cout<<"Enter Two Number :- ";
    cin>>a>>b;
    swa(a,b);
    cout<<"After Swap Number :- "<<a<<","<<b<<endl;

}
