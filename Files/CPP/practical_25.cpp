//WAP To find out the student details using multiple inheritance.
#include<iostream>
using namespace std;
class pr_mark
{
    protected:
    int mid_s,oep;
    public:
    void getprmark()
    {
        cout<<"\nEnter Practical Midterm Marks : ";
        cin>>mid_s;
        cout<<"\nEnter OEP Marks : ";
        cin>>oep;
    }
    void putprmark()
    {
        cout<<"\nPractical Midterm Marks : "<<mid_s;
        cout<<"\nOEP Marks : "<<oep;
    }
};
class th_mark
{
    protected:
    int mid,ala;
    public:
    void getthmark()
    {
        cout<<"\nEnter Theory Midterm Marks : ";
        cin>>mid;
        cout<<"\nEnter ALA Marks : ";
        cin>>ala;
    }
    void putthmark()
    {
        cout<<"\nTheory Midterm Marks : "<<mid;
        cout<<"\nALA Marks : "<<ala;
    }
};
class student
{
    protected:
    string name,rollno;
    public:
    void getstudent()
    {
        cout<<"\nEnter Student Name : ";
        cin>>name;
        cout<<"\nEnrollment No : ";
        cin>>rollno;
    }
    void putstudent()
    {
        cout<<"\nStudent Name : "<<name;
        cout<<"\nEnrollment No : "<<rollno;
    }
};
class result:public pr_mark,public th_mark,public student
{
    int total;
    float per;
    public:
    void getdata()
    {
        getstudent();
        getprmark();
        getthmark();
        total=ala+mid+mid_s+oep;
        per=total/1.5;

    }
    void putdata()
    {
        putstudent();
        putprmark();
        putthmark();
        cout<<"\n\nTotal out of 150 : "<<total;
        cout<<"\nPercentege : "<<per<<endl;
    }
};
int main()
{
    result r;
    r.getdata();
    r.putdata();

}
