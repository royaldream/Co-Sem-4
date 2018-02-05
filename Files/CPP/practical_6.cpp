#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int sal;
    string name;
    cout<<"Enter Your Name : ";
    cin>>name;
    cout<<"Enter Your Salary : ";
    cin>>sal;

    cout<<"\n-------------Your Details -----------\n";
    cout<<"Name : "<<"PARTH"<<"\t\t"<<"Salary : "<<"1999999"<<endl;
    cout<<"Name : "<<setw(5)<<name<<"\t\t"<<"Salary : "<<setw(7)<<sal;

    return 0;
}
