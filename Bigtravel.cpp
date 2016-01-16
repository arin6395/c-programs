/*
 * Bigtravel.cpp
 *
 *  Created on: 04-Oct-2015
 *      Author: arindam

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
	lli x[200001];
	lli y[200001];
	lli t;
	t=1;
	while(t--)
	{
		lli n;
		lli tot=0;
		cin>>n;
		FOR(i,0,n)
		{
			cin>>x[i]>>y[i];
		}

		FOR(i,0,n-1)
		{
			FOR(j,i+1,n)
				{
					tot+=abs(x[j]-x[i])+abs(y[j]-y[i]);

				}
		}
		cout<<tot%1000000007<<endl;
	}

	return 0;
}
*/

