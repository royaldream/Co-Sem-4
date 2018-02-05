#include<iostream>
using namespace std;
int main()
{

    int a,n,sum=0;
    cout<<"Enter Y0our Number ";
    cin>>a;

    while(a>0)
    {
        n=a%10;
        sum=sum+n;
        a/=10;

    }
 cout<<"Your Ans : "<<sum;
 return 0;
}
