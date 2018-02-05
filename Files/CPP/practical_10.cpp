#include<iostream>
using namespace std;
class ITEM
{
    int number;
    float cost;
    public:
    void setdata();
    void getdata();
    void putdata();
};
//Globle Variable function
void ITEM :: setdata()
{
    number=1;
    cost=999.99;
    cout<<"\n------------Your ITEM Details ------------\n";
    cout<<"Item Number : "<<number;
    cout<<"\nItem Cost : "<<cost;
}
void ITEM :: getdata()
{
    cout<<"\n------------Enter Your ITEM Details ------------\n";
    cout<<"Item Number : ";
    cin>>number;
    cout<<"\nItem Cost : ";
    cin>>cost;
}
void ITEM :: putdata()
{
    cout<<"\n------------Your ITEM Details ------------\n";
    cout<<"Item Number : "<<number;
    cout<<"\nItem Cost : "<<cost;
}
int main()
{
    ITEM item;
    int p;
    user:
    cout<<"\n\n--------------Menu Card---------------";
    cout<<"\n\n1 : Using global structure varibale\n0 : Exit\n\n";
    cin>>p;
    switch(p)
    {
        case 1 :
            item.setdata();
            item.getdata();
            item.putdata();
            goto user;

        case 0: break;
    }

return 0;
}
