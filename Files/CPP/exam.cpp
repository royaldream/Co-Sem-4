/*
ODD :- W.A.P -a file manipulation that read content from file 1 ,and checks if the line
starts with number that line will be copyid into file2 otherwise the line will be copyid into file3

*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{

    fstream f1,f2,f3;
    f1.open("file1",ios::out);
    f2.open("file2",ios::out);
    f3.open("file3",ios::out);
    cout<<"\nEnter Number Of Line Insert In File\n";
    int n,i=0;
    cin>>n;
    char line[50];
    while(i!=n)
    {
        cout<<"Enter String :- ";
        cin>>line;
        f1<<line<<endl;
        i++;
    }



    f1.close();
    f1.open("file1",ios::in);
    while(!f1.eof())
    {
        char s[100];
       f1.getline(s,sizeof(s));
       cout<<s<<endl;
       if(isdigit(s[0]))
       {
            //f2.write((char *)s,sizeof(s));
            f2<<s<<endl;
       }
       else
       {
            //f3.write((char *)s,sizeof(s));
            f3<<s<<endl;
       }

    }
    f1.close();
    f2.close();
    f3.close();

    return 0;
}

