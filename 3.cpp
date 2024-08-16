#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	double x[18],f[18],a;//f must value 0
	cout<<left<<setw(10)<<'x'<<left<<setw(10)<<"f(x)"<<left<<setw(10)<<"u(x)"<<endl;
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

	cout<<left<<setw(10)<<x[0]<<left<<setw(10)<<f[0]<<left<<setw(10)<<"---"<<endl;//boundary values
	for(int i=1;i<=17;i++)//central values
	{
		cout<<left<<setw(10)<<x[i]<<left<<setw(10)<<f[i]<<left<<setw(10)<< f[i-1]*(-0.05)/(x[i-1]-x[i])+f[i]*(x[i]-0.05-x[i-1])/(x[i]-x[i-1]) <<endl;

	}
	return 0;
}
