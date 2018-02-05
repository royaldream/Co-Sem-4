#include<iostream>
#include<fstream>
#include<math.h>
#include<string.h>
#define Size 50

using namespace std;

int row=50,col=50,length;
class transposition
{

    char matrix[Size][Size];
    int key[Size],n;
    public :

    void getdata();
    void transposition_matrix();
};
void transposition :: getdata()
{
    cout<<"Enter Your Key Length : ";
    cin>>n;
    cout<<"Enter Your Key : ";
    for(int i=0;i<n;i++)
    {
        cin>>key[i];
    }
    ifstream myReadFile;

     myReadFile.open("input.txt");
     char output[Size];

     if (myReadFile.is_open())
     {
        while (!myReadFile.eof())
        {
            myReadFile >> output;
        }

    }
    myReadFile.close();
    //cout<<output<<endl;

    int len=ceil((float)strlen(output)/n);
    //cout<<len<<endl;
    length=len;

    int i=0,j=0,p=0;
    row=len;
    col=n;

    while(j!=len)
    {

        for(int k=0;k<n;k++)
        {
            if(output[p]=='\0')
                output[p]='X';

            matrix[i][k]=output[p];
            //cout<<matrix[i][k]<<"\t";
            p++;
        }
        cout<<endl;
        i++;
        j++;
        if(i==len)
            break;
    }
}
void transposition :: transposition_matrix()
{
    int i=0,j=0,temp=1;

    while(i!=n)
    {

        int p=0,k=0;
        while(p!=n)
        {

            if(key[p]==temp)
                j=p;
            p++;
        }
        while(k!=length)
        {
            cout<<matrix[k][j]<<"\t";
            k++;
        }
        temp++;
        i++;
    }

}
int main()
{
    transposition t;
    t.getdata();
t.transposition_matrix();

    return 0;
}
