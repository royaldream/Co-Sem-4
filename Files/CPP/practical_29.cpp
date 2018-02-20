#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Patient
{
    string name,doa,disease,dod;
    public:
    Patient(){name=doa=disease=dod='\0';}
    void getdata();
    void putdata();
    void display();
    void search();

};
void Patient :: getdata()
{
    cout<<"Enter Indoor Patient Information\n";
    cout<<"Patient Name : ";
    cin>>name;
    cout<<"Date of Admit : ";
    cin>>doa;
    cout<<"Disease : ";
    cin>>disease;
    cout<<"Date of Discharge : ";
    cin>>dod;
    putdata();
}

void Patient :: putdata()
{
    ofstream file;
    file.open("data",ios::app);
    file<<"Patient Name : "<<name<<"\nDate of Admit : "<<doa<<"\nDisease : "<<disease<<"\nDate of Discharge : "<<dod<<"\n\n";
    file.close();
}

void Patient :: display()
{
    cout<<"\n\n\n";
    string data;
    ifstream file;
    file.open("data",ios::in);
    while(!file.eof())
    {
       getline(file,data);
       cout<<data<<endl;
    }
    file.close();
}
void Patient :: search()
{
    string sname,sdoa,data,data1;
    cout<<"Enter Name of Searched Patient : ";
    cin>>sname;
    cout<<"Enter Dat of Admit : ";
    cin>>sdoa;
    sname="Patient Name : "+sname;
    sdoa="Date of Admit : "+sdoa;
    int flag=0;
    ifstream file;
    file.open("data",ios::in);
    cout<<endl;
    while(!file.eof())
    {
       getline(file,data);
        if(data.compare(sname)==0)
        {
            getline(file,data1);
            if(data1.compare(sdoa)==0)
            {
                cout<<data<<endl;
                cout<<data1<<endl;
                getline(file,data1);
                cout<<data1<<endl;
                getline(file,data1);
                cout<<data1<<endl<<endl;
                flag=1;
            }
        }
    }
    if(!flag)
    {
        cout<<"\nNo Patient Found\n";
    }
    file.close();
}
int main()
{
    int i;
    USER:
    cout<<"\n Menu\n 1 : Add Patient Info\n 2 : Display All Patient Info\n 3 : Search Patient \n 0 : Exit\n";
    cin>>i;
    Patient p;
    switch(i)
    {
        case 1 :    p.getdata();
                    goto USER;
        case 2 :    p.display();
                    goto USER;
        case 3 :    p.search();
                    goto USER;
        case 0 :    break;
    }
    return 0;
}
