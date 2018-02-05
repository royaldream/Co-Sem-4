#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"\nEnter Your Choice :-\n1 : Addition\n2 : Substraction\n3 : Division\n4 : Multiplication\n0 : Exit\n";
    cin>>ch;
    int a,b,c;
    float d;
    cout<<"Enter Your Number a,b : ";
    cin>>a>>b;

        switch(ch)
        {
            case 1: c=a+b;break;
            case 2: c=a-b;break;
            case 3: d=a/b;cout<<"\nYour ans :"<<d;break;
            case 4: c=a*b;break;
        }

        if(!(ch==3))
        cout<<"\nYour Ans :"<<c;

            return 0;
}
