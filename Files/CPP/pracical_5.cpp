#include<iostream>
using namespace std;
int i=125;
int main()
{
    int i=652;

    {
        cout<<"Main Function Variable Value : "<<i<<endl<<"Global Variable Value Using Scope : "<<::i;

    }

}
