#include<iostream>
using namespace std;
int n;

float differnce(float a,float b)
{
    float c;
    c=a-b;
    return c;
}
int fact(int x)
{
    if(x==1)
        return 1;
    else
        return x*fact(x-1);
}
int main()
{
    cout<<"Enter Number Of Points : ";
    cin>>n;
    float x[n],y[n];
    cout<<"Enter Values of Point\n";
    for(int i=0;i<n;i++)
    {
        cout<<"X"<<i<<" : ";
        cin>>x[i];
        cout<<"Y"<<i<<" : ";
        cin>>y[i];
    }
    cout<<"\n----------------Points-----------------\n";
    for(int j=0;j<n;j++)
    {
        cout<<"X"<<j<<" : "<<x[j];
        cout<<"\tY"<<j<<" : "<<y[j]<<endl;
    }
    //  Differntial Table
    float dy[n-1][n-1];
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(i==0)
                dy[i][j]=differnce(y[j+1],y[j]);
            else
            {
                dy[i][j]=differnce(dy[i-1][j+1],dy[i-1][j]);
            }
        }
    }

    cout<<endl<<"-------------------Differntial Table -----------------"<<endl;

    int k=0;
    for(int i=0;i<n-1;i++)
    {
        cout<<endl;
        cout<<x[i]<<"\t"<<y[i]<<"\t";
        for(int j=0;j<n-i-1;j++)
        {
            cout.precision(4);
            cout.width(5);
            cout<<dy[j][i]<<"\t";

        }
    }
    cout<<endl;
    cout<<x[n-1]<<"\t"<<y[n-1]<<"\n";

    //Solve The Function
    cout<<"Enter Value of X which Find Out Y : ";
    float p,xn,yp,ans=0,pn=1;
    cin>>xn;
    p=(xn-x[0])/(x[1]-x[0]);
    cout<<"\n P = "<<p<<endl;
    for(int i=0;i<n;i++)
    {
        if(i==0)
            ans=ans+((pn*y[0]));
        else
        {
            for(int j=0;j<i;j++)
                pn=pn*(p-j);
            ans=ans+((pn*dy[i][0])/fact(i));
            cout<<pn<<"\t";
        }
        cout<<ans<<endl;
        pn=1;
    }
}
