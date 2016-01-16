/*
 * EGRCAKE.cpp
 *
 *  Created on: 06-Nov-2015
 *      Author: arindam
 *

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<iomanip>

using namespace std;
typedef long long lli;
#define FOR(i,a,b) for(int i=a;i<b;i++)

lli hcf(lli n1,lli n2)
{
	if (n2!=0)
	    return hcf(n2, n1%n2);
	else
		return n1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli n,m,count=0;
		cin>>n>>m;
		if(n==1)
			cout<<"Yes\n";
		else if(m==0||n==m)
			cout<<"No 1"<<endl;
		else if(m==1)
			cout<<"Yes\n";
		else if(n%m==0)
		{	count=n/m;
			cout<<"No "<<count<<endl;
		}
		else if(n%m!=0)
		{
			count=n/hcf(n,m);
			if(count==n)
				cout<<"Yes\n";
			else
			cout<<"No "<<count<<endl;
		}

	}
	return 0;

}

*/
