#include<iostream>
using namespace std;

struct ITEM
{
    int number;
    float cost;
}item1;
//Globle Variable function
void setdata()
{
    item1.number=1;
    item1.cost=999.99;
    cout<<"\n------------Your ITEM Details ------------\n";
    cout<<"Item Number : "<<item1.number;
    cout<<"\nItem Cost : "<<item1.cost;
}
void getdata()
{
    cout<<"\n------------Enter Your ITEM Details ------------\n";
    cout<<"Item Number : ";
    cin>>item1.number;
    cout<<"\nItem Cost : ";
    cin>>item1.cost;
}
void putdata()
{
    cout<<"\n------------Your ITEM Details ------------\n";
    cout<<"Item Number : "<<item1.number;
    cout<<"\nItem Cost : "<<item1.cost;
}
//Local Variable Function
struct ITEM setdata(struct ITEM item1)
{
    item1.number=1;
    item1.cost=999.99;
    cout<<"\n------------Your ITEM Details ------------\n";
    cout<<"Item Number : "<<item1.number;
    cout<<"\nItem Cost : "<<item1.cost;
    return item1;
}
struct ITEM getdata(struct ITEM item1)
{
    cout<<"\n------------Enter Your ITEM Details ------------\n";
    cout<<"Item Number : ";
    cin>>item1.number;
    cout<<"\nItem Cost : ";
    cin>>item1.cost;
    return item1;
}
struct ITEM putdata(struct ITEM item1)
{
    cout<<"\n------------Your ITEM Details ------------\n";
    cout<<"Item Number : "<<item1.number;
    cout<<"\nItem Cost : "<<item1.cost;
    return item1;
}
int main()
{
    struct ITEM item2;
    int p;
    user:
    cout<<"\n\n--------------Menu Card---------------";
    cout<<"\n\n1 : Using global structure varibale\n2 : Using Local structure variable\n0 : Exit\n";
    cin>>p;
    switch(p)
    {
        case 1 :
            setdata();
            getdata();
            putdata();
            goto user;

        case 2 :
            item2=setdata(item2);
            item2=getdata(item2);
            item2=putdata(item2);goto user;
        case 0: break;
    }

return 0;
}
