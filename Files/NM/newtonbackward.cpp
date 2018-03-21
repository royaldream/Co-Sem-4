#include<iostream>
using namespace std;

int fact(int n)
{
    int i=1,ans=1;
    while(i<=n)
    {
        ans=ans*i;
        i++;
    }
    return ans;
}
int main()
{
    int n;
    double a;
    cout<<"Enter no of points"<<endl;
    cin>>n;
    cout<<"enter value to be searched"<<endl;
    cin>>a;
    double x[n],y[n],d[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
    }
    double h=x[1]-x[0];
    double p=(a-x[n-1])/h;
    d[0]=y[n-1];
    for(i=0;i<n-1;i++)
    {
        cout<<"delta "<<i<<endl;
        for(j=0;j<(n-i)-1;j++)
        {
            y[j]=y[j+1]-y[j];
            cout<<y[j]<<endl;
        }
        d[i+1]=y[j-1];
    }
    double ans=d[0];
    for(i=0;i<n-1;i++)
    {
        double l=p;
        for(j=0;j<i;j++)
        {
            l=l*(p-(j+1));
        }
        ans=ans+((l*d[i+1])/fact(i+1));
    }
    cout<<endl<<ans<<endl;

}
