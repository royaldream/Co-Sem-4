#include<stdio.h>
#include<math.h>
float e=0.005f;
float fxvalue(int coef[],int n,float j)
{
    float sum=0,ans=0;
    int i=0;
    /*for(i=0;i<=n;i++)
        {
            sum=coef[i]*pow(j,i);
            ans=ans+sum;
        }*/
        ans=j*exp(j)-2;
    return ans;
}

float value(int coef[],int n,float x0,float x1)
{
    float fxn;
    fxn=(x0*fxvalue(coef,n,x1)-x1*fxvalue(coef,n,x0))/(fxvalue(coef,n,x1)-fxvalue(coef,n,x0));
    return fxn;
}
void rootlies(int coef[],int n,float x0,float x1)
{

    int flag=0;
    float ans,fx0,fx1,mid;
    mid=value(coef,n,x0,x1);

    //printf("\t%0.2f\n",mid);

    fx0=fxvalue(coef,n,x0);
    fx1=fxvalue(coef,n,x1);

    ans=fxvalue(coef,n,mid);

        if(mid-x0<e)
        {
            printf("\nRoot = %f",mid);
        }
        else
        {
            if(ans*fx0<0)
            {
                rootlies(coef,n,x0,mid);
            }
            else if(ans*fx1<0)
            {
                rootlies(coef,n,mid,x1);
            }
        }

}
void root(int coef[],int n)
{
    int ans,sum=0;
    int i,j,x=10,fx,k=0;

    for(j=0;j<x;j++)
    {
        ans=fxvalue(coef,n,j);
        printf("fx %d = %d\n",j,ans);

        if(j)
        {
            if(fx*ans<0)
            {
                k=j-1;
                break;
            }
        }
        fx=ans;
    }
    printf("interval : [ %d , %d ]",k,k+1);
    //printf("\n%f %f\n",(float)k,(float)k+1);
    float x0,x1;
    x0=(float)k;
    x1=(float)(k+1);
    rootlies(coef,n,x0,x1);
}



void main()
{
    int n,i=0;

    printf("Enter Your Correct Error : ");
    scanf("%f",e);
    printf("Entre Your Polynimial Degree : ");
    scanf("%d",&n);
    int coef[n];
    for(i=0;i<=n;i++)
    {
        printf("Enter Your Co-efficient of a%d ",i);
        scanf("%d",&coef[i]);
    }
    root(coef,n);
}
