#include<iostream>
#include<string.h>
using namespace std;
struct cricket
{
    char name[100];
    char team;
    float avg;
};
void getdata(struct cricket p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter Person "<<i<<endl<<"Person Name : ";
        cin>>p[i].name;
        cout<<"Person Team : ";
        cin>>p[i].team;
        cout<<"Person Avg : ";
        cin>>p[i].avg;

    }
}

void display(struct cricket s,int n)
{
    cout<<"Cricketer Name : "<<s.name<<endl<<"Team : "<<s.team<<endl<<"Cricketer Average : "<<s.avg<<endl;

}
int main()
{

    int n,i;
    cout<<"Enter Your Number of Cricketer :-  ";
    cin>>n;
    struct cricket c[n];

    getdata(c,n);

    char name[100];
    cout<<"Enter Your Cricketer Name for Search : ";
    cin>>name;
    for(i=0;i<n;i++)
    {
        if(strcmp(c[i].name,name)==0)
            display(c[i],n);
    }


    return 0;
}
