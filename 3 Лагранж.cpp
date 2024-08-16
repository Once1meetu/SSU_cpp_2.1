#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	double x[18],f[18],a,L[18],l;
	int n; cout<<'n';cin>>n;//degree
	cout<<left<<setw(10)<<'x'<<left<<setw(10)<<"f(x)"<<left<<setw(10)<<"L(x)"<<'\n';
	for(int i=0,k;i<=17;i++,k=0)
	{
		(i>0)?x[i]=x[i-1]+0.1:x[i]=0;//set x values
		a=1;
		while(fabs(a)>0.0000001)//counting f
		{
			f[i]+=a;
			a*=-x[i]/((2*k+3)*(2*k+2));
			k+=1;
		}
		k=0;
	}
	for(int k=0;k<=18;k++)
	{
		for(int i=0;i<=n;i++)//counting sum - the value of the function in the point
		{
			l=1;
			for(int j=0;j<=n;j++)//multiplying
			{
				if(i!=j)l*=(x[k]+0.05-x[j])/(x[i]-x[j]);
			}
			L[k]+=l*f[i];
		}
	}

	for(int i=0;i<18;i++)
	{
		cout<<left<<setw(10)<<x[i]<<left<<setw(10)<<f[i]<<left<<setw(10)<<L[i]<<'\n';

	}
	return 0;
}
