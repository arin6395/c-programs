/*
 * CHEFST.cpp
 *
 *  Created on: 04-Dec-2015
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

int main()
{
	lli t;
	cin>>t;
	while(t--)
	{
		lli n1,n2,m;
		cin>>n1>>n2>>m;

		lli count=0,com=0;
		lli small;
		if(m==0)
			cout<<n1+n2<<endl;
		else
		{
		if(n1>=n2)
			small=n2;
		else
			small=n1;
		lli i=1;
		//cout<<small<<endl;

		if(m*(m+1)/2<=small)
		{
			i=m;
			n1-=(i*(i+1))/2;
			n2-=(i*(i+1))/2;
		}
		else
		{

			n1-=small;
			n2-=small;

		}



		count=n1+n2;
		cout<<count<<endl;
		}

	}
	return 0;
}
*/


