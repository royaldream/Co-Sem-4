#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter Your Array Size :- ";
    cin>>n;
    int a[n],max,i=0,j=0;
    while(i!=n)
    {

        cin>>a[i];
        i++;
    }
    i=0;
    max=a[0];
    while(i!=n)
    {
        j=i;
        while(j!=n)
        {
                if(a[i]>a[j])
                {
                    max=a[j];
                    a[j]=a[i];
                    a[i]=max;
                }
            j++;
        }
        i++;
    }
    i=0;
    while(i!=n)
    {
        cout<<a[i]<<endl;
        i++;
    }

return 0;
}
