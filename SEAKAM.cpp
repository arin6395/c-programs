/*
 * SEAKAM.cpp
 *
 *  Created on: 06-Jan-2016
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
		int flag=0;
		lli tn,in;
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
		lli x=0,cn=0,adj=1,fc=1,tc;
		ans=fact(n);
		lli temp[15];
		if(m==0)
			cout<<ans<<endl;
		else if(flag==1)
			cout<<"0\n";
		else
		{

			FOR(l,1,m+1)
			{
				FOR(i,0,m-l+1)
				{
					x=0;
					adj=1;
					fc=1;
					if(l==1)
					{
						x=1;
						adj=fact(2);
					}
					else
					{
						cn=0;
						tc=0;
						adj=pow(2,l);
						FOR(j,i,i+l)
						{

							if(edge[0][j]==edge[0][j+1]||edge[1][j]==edge[0][j+1]||edge[1][j]==edge[1][j+1])
							{
								cn++;
								tc++;
								adj/=2;
								if(cn==2)
								{
									adj=0;
									break;
								}
							}
							else
								cn=0;
							x++;

						}

						//adj*=fact(l-tc);


					}
					//cout<<pow(-1,l)*fact(n-x)*adj<<endl;
					ans+=pow(-1,l)*fact(n-x)*adj;
				}
			}
			//cout<<endl;
			cout<<ans<<endl;
		}
	}
	return 0;
}

*/

