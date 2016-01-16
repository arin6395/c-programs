/*
 * PRIME1.cpp
 *
 *  Created on: 29-Sep-2015
 *      Author: arindam

#include<iostream>
#include<string.h>
using namespace std;
typedef long long lli;
int prime[31630]={0};
int p[5000011]={0};
void cp()
{
	for(int i=2;i*i<31630;i++)
	{
		if(prime[i]==0)
		{
			for(int j=2*i;j<31630;j+=i)
			{
				prime[j]=1;
			}
		}
	}

}

int main(){

	cp();

	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		memset(p,0,sizeof(p));
		cin>>m>>n;
		if(m<2)
			m=2;
		int v;
		for(int i=2;i*i<=n;i++)
		{
			if(!prime[i])
			{

				v=((m-1)/i+1)*i;
				if(v==i)
					v=i*2;
				for(int j=v;j<=n;j+=i)
					p[j-m]=1;
			}

		}
		int j=0;
		for(int i=0;i<=n-m;i++)
		{
			if(p[i]==0)
				if((i+m-1)%4==0)
				{
					cout<<i+m<<",";
					j++;
				}
		}
		cout<<endl;
		cout<<j;

	}
	return 0;

}


*/

