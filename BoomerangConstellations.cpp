/*
 * BoomerangConstellations.cpp
 *
 *  Created on: 09-Jan-2016
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
const int mod =1000000000+7;

lli fact(lli n)
{
	if(n==0)
		return 1;
	return n*fact(n-1)%mod;
}

lli C(lli n,lli r)
{
	if(n==0)
		return 0;
	lli ans= fact(n)/(fact(r)*fact(n-r));
	return ans;
}

int cmpfunc(const void *l1, const void *l2)
{
  	if((*(lli*)l1-*(lli*)l2)<0)
        return -1;
    else if((*(lli*)l1-*(lli*)l2)==0)
    	return 0;
    else
        return 1;
}

int main(){
	lli i,k,j,t,n,arr[2000][2],c,r,temp,l[2000];
	cin>>t;
	FOR(i,1,t+1)
	{
		cin>>n;
		r=0;
		FOR(j,0,n)
		{
			cin>>arr[j][0]>>arr[j][1];
		}
		FOR(j,0,n)
		{
			FOR(k,0,n)
			{
				l[k]=pow((arr[j][0]-arr[k][0]),2)+pow((arr[j][1]-arr[k][1]),2);
			}
			qsort(l,n,sizeof(long),cmpfunc);
			c=1;
			FOR(k,1,n+1)
			{
				if(l[k]==l[k-1])
				{
					c++;
				}
				else
				{
					r+=((c*(c-1))/2);

					c=1;
				}
			}
			r+=((c*(c-1))/2);
		}
		cout<<"Case #"<<i<<": "<<r<<endl;
	}
}
*/

