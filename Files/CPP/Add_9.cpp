#include<iostream>
using namespace std;

class rectangle
{
    float length;
   float width;
    public:void getdata();
           void area();
};

void rectangle::getdata()
{
    cout<<"Enter the length: \n";
    cin>>length;
    cout<<"Enter the width : \n";
    cin>>width;
}
void rectangle::area()
{
    cout<<"Your area is :: \n";
    cout<<(length*width)<<endl;
}

int main()
{
    rectangle a;
    a.getdata();
    a.area();
}

