#include<iostream>
using namespace std;
#define maxlength 10
#define maxmessages 10

//Input Matrix
void initialize(int arr[][10],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        cout<<"Enter message"<<i+1<<endl;
        char s[10];
        cin>>s;
        for(int j=0;s[j]!='\0';j++)
        {arr[i][j]=s[j]-48; }
    }
}
//Print Matrix of Message
void print(int arr[][10],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
//For Adding Parity bit
void addparbit(int arr[][10],int m,int n,int p)
{
    int i=0;
    for(i=0;i<m;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j] == !p)
            count++;
        }
        if(count%2 == p)
        arr[i][n] = p;
        else
        arr[i][n] = !p;
    }
    for(i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<m;j++)
        {
            if(arr[j][i] == !p)
            count++;
        }
        if(count%2 == p)
        arr[m][i] = p;
        else
        arr[m][i] = !p;
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[m][i]==!p)
        count++;
    }
    if(count%2 == p)
        arr[m][n] = p;
        else
        arr[m][n] = !p;
}
//To Induce Error
void induceerror(int arr[][10],int m,int n)
{
    int k1,k2;
    cout<<"Enter Index Of Error (For No error(-1,-1)):- ";
    cin>>k1;
    cin>>k2;
    if(arr[k1][k2]==0)
        arr[k1][k2]=1;
    else
    arr[k1][k2]=0;
    cout<<"Inducing error at Index = ( "<<k1<<" : "<<k2<<" )"<<endl;
}
//To Check Error
void checkerror(int arr[][10],int newarr[][10],int m,int n)
{
    int a=-1,b=-1;
    for(int i=0;i<m;i++)
    {
        if(arr[i][n]!=newarr[i][n])
            {
                a=i;
                break;
            }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[m][i]!=newarr[m][i])
            {
                b=i;
                break;
            }
    }
    if(a!=-1)
        cout<<"Error at Index = ( "<<a<<" : "<<b<<" )"<<endl;
    else
        cout<<"No Error"<<endl;
}
// To Copy Parity bit
void copy(int arry[][maxlength],int narray[][maxlength],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        narray[i][n]=arry[i][n];
    }
    for(int i=0;i<n;i++)
    {
        narray[m][i]=arry[m][i];
    }
}

//Main Function Calling
int main()
{
    int m,n,arr[maxmessages][maxlength],newarr[maxmessages][maxlength];

    cout<<"Enter total number of messages : ";
    cin>>m;
    cout<<"Enter length of each message : ";
    cin>>n;
    cout<<"Enter Parity Method ODD(1) Or EVEN(0) :- ";
    int p;
    cin>>p;

    initialize(arr,m,n);

    cout<<" Initial Matrix "<<endl;
    print(arr,m,n);

    addparbit(arr,m,n,p);

    cout<<" After Adding Parity Bits "<<endl;
    print(arr,m+1,n+1);

    copy(arr,newarr,m,n);

    induceerror(arr,m,n);

    cout<<" Received Message "<<endl;
    print(arr,m,n);

    addparbit(arr,m,n,p);

    cout<<" After Adding Parity Bits "<<endl;
    print(arr,m+1,n+1);

    checkerror(arr,newarr,m,n);

    return 0;
}
