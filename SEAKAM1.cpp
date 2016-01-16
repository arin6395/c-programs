/*
 * SEAKAM1.cpp
 *
 *  Created on: 07-Jan-2016
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
	if(n==r)
		return 1;
	if(n<r)
		return 0;
	lli ans= fact(n)/(fact(r)*fact(n-r));
	return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli n,m;
		cin>>n>>m;
		lli edge[2][7];
		lli no[100000]={0};
		lli temp[15];
		int flag=0;
		lli tn,in;
		lli count[2][15];
		FOR(i,0,m)
		{
			cin>>edge[0][i]>>edge[1][i];

			if(edge[0][i]>edge[1][i])
			{
				tn=edge[0][i];
				edge[0][i]=edge[1][i];
				edge[1][i]=tn;
			}
			no[edge[0][i]-1]++;
			no[edge[1][i]-1]++;
			in=i;
			while(in>0&&(edge[0][in]<edge[0][in-1]||(edge[0][in]==edge[0][in-1]&&edge[1][in]<edge[1][in-1])))
			{
				tn=edge[0][in];
				edge[0][in]=edge[0][in-1];
				edge[0][in-1]=tn;
				tn=edge[1][in];
				edge[1][in]=edge[1][in-1];
				edge[1][in-1]=tn;
				in--;


			}
		}

		in=0;
		FOR(i,0,n)
		{
			//cout<<no[i]<<"  ";
			if(no[i]!=0)
			{
				count[0][in]=i+1;
				count[1][in]=no[i];
				in++;
			}

		}
		/*cout<<in<<endl;
		FOR(i,0,in)
		{
			cout<<count[0][i]<<"  "<<count[1][i]<<endl;
		}*/
		/*FOR(i,0,m)
		{
			cout<<edge[0][i]<<"  "<<edge[1][i]<<endl;
		}*/
/*
		if(m>=n-1)
		{
			FOR(i,0,n)
			{
				if(no[i]==n-1)
					flag=1;
				//cout<<no[i]<<" ";
			}
		}


		lli ans;
		//cout<<fact(1000)<<endl;
		lli x=0,cn=0,fc=1,tc;
		ans=fact(n);
		lli sub=0;
		if(m==0)
			cout<<ans<<endl;
		else if(flag==1)
			cout<<"0\n";
		else
		{

			FOR(l,1,m+1)
			{
				sub=0;
				if(l>1)
				{

					if(l==2)
					{
						sub=0;
						FOR(i,0,in)
						{
							if(count[1][i]>=2)
							{
								//div*=fact(n-l);
								sub+=C(count[1][i],2)*fact(n-l)*2;
								cout<<"sub="<<sub<<endl;
							}
						}

					}
					if(l>2)
					{

						FOR(i,0,in)
						{
							if(count[1][i]>2)
							{
								//div*=fact(n-l);

								sub+=C(count[1][i],l)*fact(n-l)*pow(2,l);
							}

						}


					}

				}
				cout<<pow(-1,l)*((C(m,l))*fact(n-l)*pow(2,m-l+1)-sub)<<endl;\
				ans+=pow(-1,l)*((C(m,l))*fact(n-l)*pow(2,m-l+1)-sub);
			}
			//cout<<endl;
			cout<<ans<<endl;
		}
	}
	return 0;
}


*/



