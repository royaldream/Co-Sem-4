#include<iostream>
using namespace std;

class Matrix
{
    int row,col,mat1[10][10],mat2[10][10],mat3[20][20];
    public:
    void display();
    void read();
    void sum();
    void mul();
};
void Matrix::display()
{
cout<<"Your First Matrix : \n";
for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {

                cout<<mat1[i][j];
                cout<<"    ";

            }
            cout<<endl;
        }
            cout<<"Your Second Matrix : \n";

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<mat2[i][j];
                cout<<"    ";

            }
            cout<<endl;
        }
}

void Matrix::read()
{
        cout<<"Enter the Row and Column\n";
        cin>>row>>col;
        cout<<"Enter the Matrix 1: \n";
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {

                cin>>mat1[i][j];
            }
        }
      cout<<"Enter the Matrix 2: \n";
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {

                cin>>mat2[i][j];
            }
        }
    }

void Matrix::sum()
{
    cout<<"\n\nAddition of TWO Matrix :  \n";
      for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<(mat1[i][j]+mat2[i][j]);
                cout<<"    ";
            }
            cout<<endl;
        }
}
void Matrix::mul()
{
    cout<<"\n\nMultication of TWO Matrix :  \n";
      for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<(mat1[i][j]*mat2[i][j]);
                cout<<"    ";
            }
            cout<<endl;
        }
}

int main()
{
    Matrix a;
    a.read();
    a.display();
    a.sum();
    a.mul();
}
