#include<iostream>
using namespace std;

class info
{
    int age;
    char name[30];
    public:void getdata();
           void putdata();
};

void info::getdata()
{

    cout<<"Enter the Name : \n";
    cin>>name;
    cout<<"Enter the Age : \n";
    cin>>age;

}
void info::putdata()
{

    cout<<"Your Information is :: \n";
    cout<<"Your Name : "<<name<<endl;
    cout<<"Your Age : "<<age<<endl;
}

int main()
{
    info a;
    a.getdata();
    a.putdata();
}

