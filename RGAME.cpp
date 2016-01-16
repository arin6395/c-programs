/*
 * RGAME.cpp
 *
 *  Created on: 01-Jan-2016
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
typedef unsigned long long int lli;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000000+7
lli arr[100050];
lli sarr[100059];
lli n;
const int MOD = 1000000000 + 7;

lli ans(lli i,lli n)
{
	if(n==0)
		return 0;
	if(i==0)
		return 0;
	return (2*ans(i-1,n)+arr[i]*sarr[i-1])%MOD;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{

		lli score=0,l=2;

		cin>>n;
		cin>>arr[0];
		sarr[0]=arr[0];
		FOR(i,1,n+1)
		{
			cin>>arr[i];
			sarr[i]=arr[i];

		}
		sarr[0]*=2;
		//cout<<sarr[0]<<" ";
		FOR(i,1,n+1)
		{
			sarr[i]=(l*sarr[i]+sarr[i-1])%MOD;
			l*=2;
			l%=MOD;
		//	cout<<sarr[i]<<" ";
		}

		score=ans(n,n);
		score%=MOD;
		//printf("%lld\n",score);
		cout.setf(ios::fixed);
	//	cout.precision(0);
		cout<<score<<endl;



	}
}


*/
