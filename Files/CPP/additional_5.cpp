#include<iostream>
using namespace std;

enum Day { Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
int main()
{
    Day day;
    string str;
    cout<<"\nMonday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday\n";
    day=(Day)Sunday;
    cout<<day;
    cout<<endl;
    for(int i=Monday;i<=Sunday;i++)
        cout<<i<<endl;
}
