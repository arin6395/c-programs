/*
 * DEVPERF.cpp
 *
 *  Created on: 02-Jan-2016
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


int main()
{
	int t;
	cin>>t;
	char a;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int left,right,top,bottom,fi,fj,max=0,num=0;
		right=0;
		bottom=0;
		left=m+1;
		top=n+1;
		FOR(i,0,n)
		{
			FOR(j,0,m)
			{
				cin>>a;
				if(a=='*')
				{
					num++;
					if(i<top)
						top=i;
					if(i>bottom)
						bottom=i;

					if(j>right)
						right=j;
					if(j<left)
						left=j;


				}

			}

		}
		fj=(left+right)/2;
		fi=(top+bottom)/2;
		if(fj-left>max)
			max=fj-left;
		if(right-fj>max)
			max=right-fj;
		if(fi-top>max)
			max=fi-top;
		if(bottom-fi>max)
			max=bottom-fi;
		//cout<<"top="<<top<<"\nbottom="<<bottom<<"\nleft="<<left<<"\nright="<<right<<"\nfi="<<fi<<"\nfj="<<fj<<"\nmax="<<max<<endl;
		if(num!=0)
			cout<<max+1<<endl;
		else
			cout<<"0\n";

	}
	return 0;
}
*/


