/*
 * LOTERY.cpp
 *
 *  Created on: 11-Oct-2015
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
#define FORR(i,a,b) for(int i=a;i>b;--i)

lli mat1[5001][5001];
lli mat2[5001][5001]={{1}};

lli LCM(lli x, lli y)
{
	lli a,b;
	a=x;
	b=y;

	while (b != a)
	{
	    if(a>b)
	    	a-=b;
	    else
	    	b-=a;
	 }
	return x*y/a;

};


void compute()
{
	FOR(i,0,5001)
	{
		mat1[0][i]=mat1[i][i]=i+1;
	}

	FOR(i,1,5001)
	{
		FOR(j,1,i-1)
		{
			mat1[j][i]=(mat1[i-1][j]*mat1[i-1][j-1])/(mat1[i-1][j]-mat1[i-1][j-1]);
		}
	}
	FOR(i,0,5001)
		{
			FORR(j,i/2+1,2)
			{
				mat2[i][j]=LCM(mat1[j][i],mat2[j-1][i]);
			}
		}
}

int main()
{
	compute();
	lli t,n,k;
	lli c[100000];
	lli d[100000];
	lli ans,A,B,M;
	cin>>t;
	cin>>n>>k;
	cin>>A>>B>>M;
	FOR(i,0,t-1)
	{
		cin>>c[i];
	}
	FOR(i,0,t-1)
		{
			cin>>d[i];
		}
	lli i=0;
	ans=mat2[n][k];
	cout<<mat2[n][k]<<endl;
	while(i<t-1)
	{

		n = 1 + (A * ans + c[i]) % M ;
		k = 1 + (B * ans + d[i])% n;
		ans=mat2[n][k];
		cout<<mat2[n][k]<<endl;
		i++;
	}
	return 0;
}

*/

