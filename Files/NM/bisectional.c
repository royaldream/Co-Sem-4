#include<stdio.h>
#include<math.h>
float fxvalue(int coef[],int n,float j)
{
    float sum=0,ans=0;
    int i=0;
    for(i=0;i<=n;i++)
        {
            sum=coef[i]*pow(j,i);
            ans=ans+sum;
        }
    return ans;
}
void rootinterval(int coef[],int n,float k,float j)
{
    float mid,e=0.005;
    mid=(k+j)/2;
   // printf("\n%f %f\n",k,j);
    //printf("\n%f\n",mid);
    float ans,fk,fj;
    fk=fxvalue(coef,n,k);
    fj=fxvalue(coef,n,j);
    ans=fxvalue(coef,n,mid);

    if(mid-k<e)
    {
        printf("\nRoot = %0.2f",mid);
    }
    else
    {
        if(ans*fk<0)
        {

            rootinterval(coef,n,k,mid);
        }
        else if(ans*fj<0)
        {

            rootinterval(coef,n,mid,j);
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
    rootinterval(coef,n,(float)k,(float)k+1);



}


void main()
{
    int n,i=0;
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
