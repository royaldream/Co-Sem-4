#include<iostream>
#include<fstream>
#include<stdio.h>
#include<ctype.h>
#define Size 50
using namespace std;
void encript(char str[],int key)
{
    int ch;
    int i;

    for(i=0;str[i]!=NULL;i++)
    {

        ch=(int)str[i];

        if(isupper(str[i]))
        {
            ch=ch-key-65;
            if(ch<0)
            ch=ch+26;
            ch=ch%26+65;
        }
        else
        {
            ch=ch-key-97;
            if(ch<0)
            ch=ch+26;
            ch=ch%26+97;

        }
        str[i]=(char)ch;
        printf("%c",str[i]);
    }

}
int main()
{
    char str[Size],char_text;
    int ch,key=0,i;
    fstream file;
    file.open("input",ios::out);

    printf("\nEnter Your Key For Encrypt : ");
    scanf("%d",&key);

    printf("\nEnter Your Text : ");
    scanf("%s",str);
    file.write((char *)str,sizeof(str));
    file.read((char *)str,sizeof(str));
    for(i=0;str[i]!=NULL;i++)
    {

        ch=(int)str[i];

        if(isupper(str[i]))
        {
            ch=ch+key-65;
            ch=ch%26+65;
        }
        else
        {
            ch=ch+key-97;
            ch=ch%26+97;

        }
        str[i]=(char)ch;
    }
    printf("\nYour Encript Text is : %s",str);
    file.write((char *)str,sizeof(str));
    printf("\nYour Decript Text is : ");
    encript(str,key);

}
