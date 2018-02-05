#include<iostream>
#include<string.h>
using namespace std;
class ABC
{
    char s[50];
    public:
    ABC()
    {
        s[0]='\0';
    }
    void getdata()
    {
        cout<<"Enter Your String :-  ";
        cin>>s;
    }
    void putdata()
    {
        cout<<"Your String is "<<s<<endl;
    }
    friend void operator +(ABC &,ABC &);
    //friend ABC operator =(ABC &,ABC &);
    /*ABC(ABC &a){strcpy(s,a.s);
    }*/
    void operator =(ABC &a)
    {
        strcpy(s,a.s);
    }
    void length()
    {
        int i=strlen(s);
        cout<<"\n String Length :- "<<i<<endl;
    }
    int operator==(ABC &a)
    {
        if(strcmp(s,a.s)==0)
            return 1;
        else
            return 0;
    }

};

void operator +(ABC &a,ABC &b)
{
    strcat(a.s,b.s);
}/*
ABC operator =(ABC &a,ABC &b)
{
    strcpy(a.s,b.s);
    return a;
}*/
int main()
{
    ABC abc,def;
    abc.getdata();
    def.getdata();
    cout<<"\n-------String Compare------------\n";
    if(abc==def)
    {
        cout<<"\nString Equal\n";
    }
    else{cout<<"\nString is not Equal.\n";}
    cout<<"\n-------String Concating ------------\n";
    abc+def;
    abc.putdata();
    cout<<"\n-------String Copy------------\n";
    abc=def;
    abc.putdata();
    cout<<"\n-------String Length------------\n";
    abc.length();



}
