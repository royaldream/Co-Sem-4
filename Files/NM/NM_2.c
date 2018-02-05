#include<stdio.h>
#include<math.h>
float e=0.005f;
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
float fdvalue(int coef[],int n,float j)
{
    //printf("\nABC: %f \t%d \t %d\t %d \t %d\n",j,coef[0],coef[1],coef[2],coef[3]);
    float sum=0,ans=0;
    int i=0;
    for(i=0;i<=n;i++)
        {
            sum=(i)*coef[i]*pow(j,i-1);
            ans=ans+sum;
            //printf("\nFd : %f \t%d",ans,i);
        }
    return ans;
}
float value(int coef[],int n,float x1)
{
    float xn;
    float fx1=fxvalue(coef,n,x1);
    float fd=fdvalue(coef,n,x1);
    xn=x1-(fx1/fd);
    printf("\nx1 %f\tFx1 %f\tFd %f\tXn%f",x1,fx1,fd,xn);
    return xn;
}
void rootlies(int coef[],int n,float x0,float x1)
{
    static int t=5;
    t--;
    int flag=0;
    float ans,fx0,fx1,mid;
    mid=value(coef,n,x1);
    fx0=fxvalue(coef,n,x0);
    fx1=fxvalue(coef,n,x1);
    printf("\nRoot = %f %f",mid,x0);
    ans=fxvalue(coef,n,mid);

        if(t<0)
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



int main()
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
    printf("%f",fdvalue(coef,n,3));
    root(coef,n);
}
