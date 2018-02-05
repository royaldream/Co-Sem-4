#include<iostream>
using namespace std;

class EMPLOYEE
{
    string name;
    int age;
    public :
    void getdata();
    void putdata();
};
void EMPLOYEE :: getdata()
{
    cout<<"\nE\tnter EMPLOYEE Name : ";
    cin>>name;
    cout<<"\n\t"<<name<<" EMPLOYEE Age : ";
    cin>>age;
}

void EMPLOYEE :: putdata()
{
    cout<<"\n\tEMPLOYEE Name : "<<name;
    cout<<"\n\t"<<name<<" EMPLOYEE Age : "<<age;
}

int main()
{
    cout<<"Enter Your No of Employee : ";
    int n;
    cin>>n;
    EMPLOYEE emp[n];

    for(int i=0;i<n;i++)
    {
        emp[i].getdata();
    }

    for(int i=0;i<n;i++)
    {
        emp[i].putdata();
    }
    return 0;
}
