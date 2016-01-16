/*
 * KSPHERES.cpp
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

	lli n,m,c;
	lli uh[1111]={0};
	lli lh[1111]={0};
	lli dp[1015][1015]={{0}};
	lli freq[1111]={0};


	lli u=0,l=0;
	cin>>n>>m>>c;
	FOR(i,0,n)
	{
		cin>>u;
		uh[u]++;

	}
	FOR(i,0,m)
	{
		cin>>l;
		lh[l]++;

	}

	dp[0][0]=0;
	FOR(i,1,c+1)
	{
		dp[i][i]=0;
		freq[i]=lh[i]*uh[i];
		dp[0][i]=dp[0][i-1]+freq[i];

	}

	FOR(i,1,c+1)
	{
		FOR(j,i+1,c+1)
		{
			dp[i][j]=dp[i][j-1]+freq[j]*dp[i-1][j-1];
			dp[i][j]=dp[i][j]%1000000007;

		}
	}


	FOR(i,1,c+1)
	{
		cout<<dp[i][c]%1000000007<<endl;
	}
return 0;
}

*/

