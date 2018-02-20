#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<math.h>
using namespace std;
void root(float coef[],int n,float p,float q);
void rootdisplay(float p,float q)
{
	float c,b;
	b=p;
	c=q;
	cout<<"Root of Quadratic Equation : ";
	if(((b*b)-4*c)<0)
	{
		cout<<"\nA : "<<(-q/2)<<"+"<<sqrt(-((b*b)-4*c))/2<<"i"<<endl;
		cout<<"B : "<<(-q/2)<<"-"<<sqrt(-((b*b)-4*c))/2<<"i"<<endl;
	}
	else
	{
		cout<<"\nA : "<<(-q/2)+sqrt((b*b)-4*c)/2<<endl;
		cout<<"B : "<<(-q/2)+sqrt((b*b)-4*c)/2<<endl;
	}
}
void deltapq(float coef[],int n,float p,float q,float b[],float c[])
{
	float dp,dq,p1,q1,d;
	float diff;
	diff=(c[2]*c[2])-(c[1]*(c[3]-b[3]));
	dp=((b[3]*c[2])-(b[4]*c[1]))/diff;
	dq=((b[4]*c[2])-(b[3]*(c[3]-b[3])))/diff;
	p1=p+dp;
	q1=q+dq;
	if((p1-q1)>0)
		d=p1-q1;
	else
		d=q1-p1;
	//cout<<"P value : "<<p1<<endl<<"Q value : "<<q1<<endl;
	if(d<0.005)
	{
		cout<<"P value : "<<p1<<endl<<"Q value : "<<q1<<endl;
		cout<<"X^2 + "<<round(p1)<<"X + "<<round(q1)<<" = 0"<<endl;
		rootdisplay(round(p1),round(q1));
	}
	else
	{
		//cout<<"P value : "<<p1<<endl<<"Q value : "<<q1<<endl;
		root(coef,n,p1,q1);
	}
}
void root(float coef[],int n,float p,float q)
{
	float b[n],c[n-1],a,d;
	a=-p;
	d=-q;
	b[0]=coef[0];
	b[1]=a*b[0]+coef[1];
	for(int i=2;i<=n;i++)
	{
		b[i]=(a*b[i-1])+(d*b[i-2])+coef[i];
	}
	c[0]=b[0];
	c[1]=a*c[0]+b[1];
	for(int i=2;i<n;i++)
	{
		c[i]=(a*c[i-1])+(d*c[i-2])+b[i];
	}
	/*for(int i=0;i<=n;i++)
	{
		cout<<"B :"<<b[i]<<"\t"<<"c : "<<c[i]<<endl;
	}*/
	//cout<<"P value : "<<p<<endl<<"Q value : "<<q<<endl;
	deltapq(coef,n,p,q,b,c);
	
}

int main()
{

	int n,i=0;

	cout<<"Enter Your Polynomial Degree : ";
    cin>>n;
    float coef[n+1];
    for(i=0;i<=n;i++)
    {
        cout<<"Enter Your Co-efficient of a "<<i<<":- ";
        cin>>coef[i];
	}
	float p,q;
	cout<<"Enter p & q Value :-  ";
	cin>>p>>q;
	root(coef,n,p,q);	
}
