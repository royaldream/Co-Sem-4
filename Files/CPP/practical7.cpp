#include<iostream>
using namespace std;
void callbyvalue(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"YOUR FIRST NUMBER : "<<a<<endl<<"YOUR SECOND NUMBER : "<<b<<endl;
}
void callbyrefernce(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int a,b;
    cout<<"Enter Your Two Number :";
    cin>>a>>b;

    callbyvalue(a,b);
    callbyrefernce(&a,&b);
    cout<<"YOUR FIRST NUMBER : "<<a<<endl<<"YOUR SECOND NUMBER : "<<b<<endl;
    return 0;
}
