/*
 * KFUNC.cpp
 *
 *  Created on: 07-Nov-2015
 *      Author: arindam
 *
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<iomanip>

using namespace std;
typedef unsigned long long int lli;
#define FOR(i,a,b) for(int i=a;i<b;i++)

lli f(lli n)
{
	lli sum=0;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	if(sum>9)
		return f(sum);
	else
		return sum;
}


int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		lli a,d,l,r,sum=0,start=0,val=0,num=0,total=0,i;

		cin>>a>>d>>l>>r;
		val=f(d);
	//	d=f(d);
		//cout<<a<<"    "<<val<<endl;
		if(val==0||val==9)
			total=(r-l+1)*f(a);
		else if(val==3||val==6)
		{

			sum=f(a+d)+f(a+d+d)+f(a+2*d+d);
			num=(r-l+1)/3;
			total=num*sum;
			i=l+num*3;
			start=f(a+(i-1)*f(d));
			while(i<=r)
			{
				//cout<<i<<endl;
				total+=start;
				start=f(start+d);
				i++;
			}
		}

		else
		{

			sum=45;
			num=(r-l+1)/9;
			total=num*sum;
			i=l+num*9;
			start=f(a+(i-1)*f(d));
			while(i<=r)
			{
				//cout<<i<<endl;
				total+=start;
				start=f(start+d);
				i++;
			}

		}
		cout<<total<<endl;
	}

	return 0;
}

*/
