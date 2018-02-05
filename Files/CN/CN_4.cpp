#include<iostream>
#include<string.h>
#define SIZE 50
using namespace std;

class CRC
{
    public:
    char Dataword[SIZE],Divisor[SIZE];
    int dataword,divisor,reminder;

    void getdata();
    void putdata();
    void mdataword();
    int btod(char[]);
    void freminder();
    void fdataword(int);
};
void CRC :: getdata()
{
    cout<<"Enter Your DataWord :- ";
    cin>>Dataword;
    cout<<"Enter Your Divisor :- ";
    cin>>Divisor;
}
void CRC :: putdata()
{
    cout<<"Your DataWord :- "<<Dataword<<endl;
    cout<<"Your Divisor :- "<<Divisor<<endl;
}
int CRC :: btod(char data[])
{
    long bin, dec = 0, rem, num=0, base = 1;
    int n=strlen(data);
    while (n > 0)
    {
        n--;
        rem = data[n]-48;
        dec = dec + rem * base;
        base = base * 2;
    }
   // cout << "The decimal equivalent of " << " : " << dec << endl;
    return dec;
}

void CRC:: mdataword()
{   int i;
    int n=strlen(Dataword);
    int len=strlen(Divisor);
    for(i=n;i<n+len-1;i++)
    {
        Dataword[i]='0';
    }
    Dataword[i]='\0';
    cout<<endl<<"Data Word : "<<Dataword<<endl;
}
void CRC :: freminder()
{
    int i=dataword/divisor;
    reminder=dataword-(i*divisor);
    cout<<"\nReminder : "<<reminder<<endl;

}
int binary(int num)
{
    int rem;
    if (num <= 1)
    {
        cout << num;
        return 0;
    }
    rem = num % 2;
    binary(num / 2);
    return rem;
}
void CRC :: fdataword(int rem)
{
    //cout<<rem;
    int num=0;
    int n=strlen(Dataword);
    int len=strlen(Divisor);
    for(int i=n-len+1;i<n;i++)
    {
        num=rem%10;
        Dataword[i]=(char)num;
        cout<<Dataword[i];
        rem=rem/10;

    }

}
int main()
{
    CRC c;
    c.getdata();
    c.mdataword();
    c.dataword=c.btod(c.Dataword);
    c.divisor=c.btod(c.Divisor);
    cout<<"\nDATA WORD : "<<c.dataword<<"\t Divisor : "<<c.divisor<<endl;
    c.freminder();
    int bre=binary(c.reminder);
   // cout<<bre;
    c.fdataword(bre);
    c.putdata();

}
