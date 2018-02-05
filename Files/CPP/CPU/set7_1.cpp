#include<iostream>
#include<string>
using namespace std;
struct personal
{
    char name[100];
    char join[100];
    float salary;
};

void getdata(struct personal p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter Person "<<i<<endl<<"Person Name : ";
        cin>>p[i].name;
        cout<<"Person Salary : ";
        cin>>p[i].salary;
        cout<<"Person Join : ";
        cin>>p[i].join;

    }
}

void display(struct personal p[],int n)
{
    int i=0,j;
    struct personal s[n],sal;

    while(i<n)
    {
        s[i]=p[i];
        i++;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(s[i].salary>s[j].salary)
            {
                sal=s[i];
                s[i]=s[j];
                s[j]=sal;
            }
        }
    }
    i=0;
    while(i<n)
    {
        cout<<"Person Name : "<<s[i].name<<endl<<"Person Salary : "<<s[i].salary<<endl<<"Person Join : "<<s[i].join<<endl;
        i++;
    }

}
int main()
{

    int n,i;
    cout<<"Enter Your Number of Person :-  ";
    cin>>n;
    struct personal p[n];

    getdata(p,n);

    display(p,n);

    return 0;
}
