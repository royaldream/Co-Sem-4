#include<iostream>
using namespace std;
#define Size 50
class person
{public:
     int age;
     char name[Size];

    void getdata();
    void display();
};
void person :: getdata()
{
    cout<<"Enter Your Name : ";
    cin>>name;
    cout<<"Enter Your Age : ";
    cin>>age;
}
void person :: display()
{
    cout<<"\Your Name : "<<name;

    cout<<"\Your Age : "<<age;

}
int main()
{
    person p1;
    p1.getdata();
    p1.display();

    return 0;
}
