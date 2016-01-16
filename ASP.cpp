/*
 * ASP.cpp
 *
 *  Created on: 18-Oct-2015
 *      Author: arindam
 */
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
int cmp(const void *a,const void *b)
{
	const lli *x=(const lli *)a;
	const lli *y=(const lli *)b;
	if(*x>*y)
		return 1;
	else if(*x<*y)
		return -1;
	else
		return 0;
}

int main()
{
	int t;
	scanf("%d",&t);
	//lli val[1000005];
	//lli val2[1000005];
	lli max1=0,max2=0,val;
	int flag;
	while(t--)
	{
		lli n;
		flag=0;
		//scanf("%lld",&n);
		cin>>n;
		int j=0;
		for(j=0;j<n;j++)
		{
			scanf("%lld",&val);

			if(max1>val&&max2>val){
				flag=1;
				break;
			}
			else
			{
				if(max1<val)
				{
					max2=max1;
					max1=val;
				}
				else if(max2<val)
					max2=val;
			}
		}
		for(j=j+1;j<n;j++)
			scanf("%lld",&val);


		if(flag==1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}



