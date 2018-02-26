#include<iostream>
using namespace std;
int Add(int a,int b,int c=5)
{
    int ans;
    if(c==5)
    ans=a+b;
    else
    ans=a+b+c;
    return ans;
}
int main()
{
    int a,b,c,n,ans;
    cout<<"\nMenu\n1 : Two Number Add\n2 : Three Number Add\n";
    cin>>n;
    switch(n)
    {
        case 1:
            cout<<"\nEnter Two Number A & B : ";cin>>a>>b;
            ans=Add(a,b);
            cout<<"\nTwo Number Addition is : "<<ans<<endl;
            break;
        case 2:
            cout<<"\nEnter Three Number A & B & C : ";
            cin>>a>>b>>c;
            ans=Add(a,b,c);
            cout<<"\nThree Number Addition is : "<<ans<<endl;
            break;
        case 0: break;
    }

}
