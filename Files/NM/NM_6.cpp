#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
float coef[3][4];

void make_equation(float a[][4],float x,float y,float z)
{
    float k[3];
    k[1]=(a[1][4]-(a[1][2]*y)-(a[1][3]*z))/(a[1][1]);
    k[2]=(a[2][4]-(a[2][1]*x)-(a[2][3]*z))/(a[2][2]);
    k[3]=(a[3][4]-(a[3][1]*x)-(a[3][2]*y))/(a[3][3]);

    //cout<<"\n X = "<<k[1]<<"\n Y = "<<k[2]<<"\n Z = "<<k[3]<<endl;
    if(fabs(x-k[1])<0.005 && fabs(y-k[2])<0.005 && fabs(z-k[3])<0.005)
    {
        cout<<"\n X = "<<x<<"\n Y = "<<y<<"\n Z = "<<z<<endl;
    }
    else
    {
        x=k[1];
        y=k[2];
        z=k[3];
        make_equation(a,x,y,z);
    }


}
void solve(float a[][4])
{
        int x,y,z;
        cout<<"\nEnter Initial Three Value\n";
        cin>>x>>y>>z;
        make_equation(coef,x,y,z);

}
void swap(float a[][4],int i,int j)
{
    int temp;
    for(int k=1;k<=4;k++)
    {
        temp=a[i][k];
        a[i][k]=a[j][k];
        a[j][k]=temp;
    }

}
void check_diagonal(float a[][4])
{
    if(abs(a[1][1])>(abs(a[1][2])+abs(a[1][3])))
    {
        if(abs(a[2][2])>(abs(a[2][1])+abs(a[2][3])))
        {
            if(abs(a[3][3])>(abs(a[3][1])+abs(a[3][2])))
            {
                cout<<"Diagonally";
            }
        }
        else
        {
            swap(a,2,3);
        }
    }
    else
    {
        if(abs(a[2][1])>abs(a[3][1]))
        {
            swap(a,1,2);
        }
        else
        {
            swap(a,1,3);
        }
    }
}
int main()
{
    cout<<"\nEnter Three Equation Coefficient\n";
    for(int i=1;i<=3;i++)
    {
        cout<<"\nEquation "<<(i)<<endl;
        for(int j=1;j<=4;j++)
        {
            cout<<"Coefficients a"<<j<<" : ";
            cin>>coef[i][j];
        }
    }

    check_diagonal(coef);
    solve(coef);

}
