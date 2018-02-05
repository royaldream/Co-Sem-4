#include<iostream>
#include<string.h>
using namespace std;

void redundant(int a[],int r[])
{
    cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
    a[6]=r[0]=(a[1]+a[2]+a[3])%2;
    a[5]=r[1]=(a[0]+a[1]+a[2])%2;
    a[4]=r[2]=(a[0]+a[2]+a[3])%2;
    //cout<<r[2]<<r[1]<<r[0]<<endl;
    //cout<<a[4]<<a[5]<<a[6]<<endl;
}
void syndrome(int a[])
{
    int s[3];

    s[0]=(a[3]+a[2]+a[1]+a[6])%2;
    s[1]=(a[2]+a[1]+a[0]+a[5])%2;
    s[2]=(a[1]+a[0]+a[3]+a[4])%2;

    cout<<endl<<s[2]<<s[1]<<s[0]<<endl;

    char str[4];

    for(int i=0;i<3;i++)
    {
        str[i]=(s[2-i])+48;
        //cout<<endl<<str[i];
    }
    str[3]='\0';

    if(strcmp("000",str)==0)
        cout<<"NO ERROR \n";
    else
    if(strcmp("001",str)==0)
        cout<<"ERROR bit 7\n";
    else
    if(strcmp("010",str)==0)
        cout<<"ERROR bit 6\n";
    else
    if(strcmp("011",str)==0)
        cout<<"ERROR bit 2\n";
    else
    if(strcmp("100",str)==0)
        cout<<"ERROR bit 5\n";
    else
    if(strcmp("101",str)==0)
        cout<<"ERROR bit 4\n";
    else
    if(strcmp("110",str)==0)
        cout<<"ERROR bit 1\n";
    else
    if(strcmp("111",str)==0)
        cout<<"ERROR bit 3\n";





}

int main()
{
    int a[7],r[3];
    string dataword;
    int i;
    user :
    cout<<"\tENTER YOUR CHOICE\n1 : PREDEFINE\n2 : USER DEFINE\n0 : EXIT\n";
    cin>>i;
    switch(i)
    {
        case 0:break;
        case 1:
            cout<<"Enter Your 4-bits Dataword :- ";
            cin>>dataword;

            for(int n=0;dataword[n]!='\0';n++)
            {
                a[n]=dataword[n]-48;
               // cout<<a[n]<<endl;
            }
            redundant(a,r);

            cout<<"**************CODE WORD**************\n";

            for(int i=0;i<7;i++)
                cout<<a[i];

           // syndrome(a,r);
        goto user;
        case 2:

            cout<<"Enter Your Codeword :- ";
            cin>>dataword;

            for(int n=0;dataword[n]!='\0';n++)
            {
                a[n]=dataword[n]-48;
            }

            cout<<"**************CODE WORD**************\n";

            for(int i=0;i<7;i++)
                cout<<a[i];

            syndrome(a);
        goto user;
    }


    return 0;
}
