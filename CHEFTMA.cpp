/*
 * CHEFTMA.cpp
 *
 *  Created on: 03-Jan-2016
 *      Author: arindam
 *
#include<map>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<iomanip>


using namespace std;
typedef long long int lli;
#define FOR(i,a,b) for(int i=a;i<b;i++)
const int MOD = 1000000000 + 7;
lli a[100055];

lli cd[200055];

int cmp(const void *a,const void *b)
{
	lli  x=*(const lli *)a;
	lli  y=*(const lli *)b;
	if(x>y)
		return -1;
	if(x<y)
		return 1;
	return 0;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli n,wt,bl,x;
		cin>>n>>wt>>bl;
		FOR(i,0,n)
			cin>>a[i];
		FOR(i,0,n)
		{
			cin>>x;
			a[i]-=x;
		}
		FOR(i,0,wt+bl)
		{
			cin>>cd[i];
		}
		qsort(a,n,sizeof(lli),cmp);
		qsort(cd,wt+bl,sizeof(lli),cmp);
		int day=0,but=0;
		lli tot=0;
		while(day<n&&but<wt+bl)
		{
			//cout<<a[day]<<" ";
			if(cd[but]<=a[day])
			{
				a[day]-=cd[but];
				day++;
				but++;

			}
			else
				but++;

		}
		FOR(i,0,n)
		{
			tot+=a[i];
		}
		cout.setf(ios::fixed);
		cout<<tot<<endl;
	}
	return 0;
}

*/

