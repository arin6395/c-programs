/*
 * SUBINC.cpp
 *
 *  Created on: 03-Oct-2015
 *      Author: arindam

#include<iostream>
#include<string.h>
using namespace std;
typedef long long lli;

int main()
{
	lli i,j,a[100015];
	int t;
	cin>>t;
	while(t--)
	{
		lli n;
		lli ans=0;
		cin>>n;


		for(i=0;i<n;i++)
			cin>>a[i];
		if(n==1)
			cout<<"1"<<endl;
		else{
		i=0;
		j=1;
		while(j<=n)
		{
			while(a[j]>=a[j-1]&&j<n)
			{
				j++;
			}

			ans+=(j-i)*(j-i+1)/2;
			i=j;
			j++;


		}
		cout<<ans<<endl;
	}}
	return 0;
}

*/

