#include<iostream>
#include<string.h>
using namespace std;

struct student
{
    int roll,m1,m2,m3;
    int total;
    char grade;
};

void getdata(struct student p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter Student Details "<<i<<endl<<"Student Roll : ";
        cin>>p[i].roll;
        cout<<"Student Mark 1 : ";
        cin>>p[i].m1;
        cout<<"Student Mark 2 : ";
        cin>>p[i].m2;
        cout<<"Student Mark 3 : ";
        cin>>p[i].m3;
        p[i].total=p[i].m1+p[i].m2+p[i].m3;
        int n=p[i].total/30;

        if((p[i].total/30)==10)
            n=9;
        p[i].grade=(char)(74-n);


    }
}
void display(struct student p[],int n)
{
    int i=0,j;
    struct student s[n],sal;

    while(i<n)
    {
        s[i]=p[i];
        i++;
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(s[i].total<s[j].total)
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
        cout<<"Student Roll : "<<s[i].roll<<endl<<"Student Grade : "<<s[i].grade<<endl;
        i++;
    }

}

int main()
{

    int n,i;
    cout<<"Enter Your Number of Student :-  ";
    cin>>n;
    struct student p[n];

    getdata(p,n);

    display(p,n);
    return 0;
}
