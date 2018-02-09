#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    char input[50];
    char c;
    int i=0;
    fstream fi,fo;
    fi.open("datain",ios::in);
    fi.read((char *)&input,sizeof(input));
    cout<<input<<endl;
    fi.close();

    fo.open("dataout",ios::out);

    while (input[i])
    {
        c=input[i];
        input[i]=toupper(c);
        i++;
    }
    i=0;
    while(input[i])
    {
        fo.write((char *)&input[i],sizeof(input[i]));
        i++;
    }
    fo.close();
    cout<<input<<endl;
}
