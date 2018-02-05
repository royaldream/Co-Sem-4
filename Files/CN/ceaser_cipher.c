#include<stdio.h>
#include<ctype.h>
#define Size 50

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
void main()
{
    char str[Size],char_text;
    int ch,key=0,i;

    printf("\nEnter Your Key For Encrypt : ");
    scanf("%d",&key);

    printf("\nEnter Your Text : ");
    scanf("%s",str);

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
    printf("\nYour Decript Text is : ");
    encript(str,key);

}
