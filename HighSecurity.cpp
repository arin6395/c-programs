/*
 * HighSecurity.cpp
 *
 *  Created on: 11-Jan-2016
 *      Author: arindam
 *
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<iomanip>


using namespace std;
typedef long long int lli;

#define FOR(i,a,b) for(int i=a;i<b;i++)

char arr[2][1001];
int max(int a,int b)
{
	if(a<b)
		return b;
	return a;
}



int main()
{
	int t;
	cin>>t;
	int j=1;

	while(t--)
	{
		int ans=0;
		int n;
		int c1=0,c2=0,cs1=0,cs2=0;
		int x1=0,x2=0;
		char pc1,pc2;
		cin>>n;
		//cin>>dummy;
		cin>>arr[0];
		//cin>>dummy;
		cin>>arr[1];
		//cin>>dummy;
		//cout<<arr[0]<<endl<<arr[1]<<endl;
		pc1=pc2='X';
		arr[0][n]='X';
		arr[1][n]='X';
		int f=1;
		FOR(i,1,n-1)
		{
			if((arr[0][i-1]==arr[1][i-1]&&arr[0][i-1]=='X')&&(arr[0][i+1]==arr[1][i+1]&&arr[0][i+1]=='X')&&(arr[0][i]==arr[1][i]&&arr[0][i]=='.'))
			{
				arr[0][i]='X';
				arr[1][i]='X';
				ans++;
			}
		}
		if(arr[0][0]=='.'&&arr[1][0]=='.'&&arr[0][1]=='X'&&arr[1][1]=='X')
		{
			arr[0][0]='X';
			arr[1][0]='X';
			ans++;
		}
		if(arr[0][n-1]=='.'&&arr[1][n-1]=='.'&&arr[0][n-2]=='X'&&arr[1][n-2]=='X')
		{
			arr[0][n-1]='X';
			arr[1][n-1]='X';
			ans++;
		}
		//cout<<arr[0]<<endl<<arr[1]<<endl;
		int ps1=0,ps2=0;
		FOR(i,0,n+1)
		{
			if(arr[0][i]!=pc1&&pc1=='X')
			{
				c1=0;
				x1++;
				pc1='.';
				c1++;
			}
			else if(arr[0][i]==pc1&&pc1=='.')
			{
				c1++;
			}
			else if(arr[0][i]!=pc1&&pc1=='.')
			{
				if(c1==1&&arr[1][i-1]=='.')
				{
					f=1;
					for(int j=i-1;j>=ps1;j--)
					{
						if(arr[1][j]=='X')
						{
							f=0;
							break;
						}
					}
					if(f==0||ps1==0)
						cs1++;
					ps1=i-1;
				}

				pc1='X';
			}
			if(arr[1][i]!=pc2&&pc2=='X')
			{
				c2=0;
				x2++;
				pc2='.';
				c2++;
			}
			else if(arr[1][i]==pc2&&pc2=='.')
			{
				c2++;
			}
			else if(arr[1][i]!=pc2&&pc2=='.')
			{
				if(c2==1&&arr[0][i-1]=='.')
				{
					f=1;
					for(int j=i-1;j>=ps2;j--)
					{
						if(arr[0][j]=='X')
							{
							f=0;
							break;
							}

					}
					if(f==0||ps2==0)
						cs2++;
					ps2=i-1;
				}

				pc2='X';
			}
		}
		if(n==0)
			cout<<"Case #"<<j<<": 0\n";
		else
		{
			ans+=x1+x2-cs1-cs2;
			//cout<<x1<<"+"<<x2<<cs1<<"  "<<cs2<<endl;
			cout<<"Case #"<<j<<": "<<ans<<endl;
		}
		j++;
	}
	return 0;
}
*/


