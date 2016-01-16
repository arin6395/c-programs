/*
 * pc.cpp
 *
 *  Created on: 02-Nov-2015
 *      Author: arindam
 */
/*
 * ps.cpp
 *
 *  Created on: 02-Nov-2015
 *      Author: arindam
*
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<iomanip>

using namespace std;

typedef long long lli;
#define FOR(i,a,b) for(int i=a;i<b;i++)
lli arr[4000000];
int count=0;

int psearch(lli l,lli r,lli k)
{
	count++;
	if(l>r)
		return -1;
	if(l==r&&arr[l]==k)
		return l;
	long long int n;
	n=l+(k*(r-l+1))/(arr[l]+arr[r]);
	//cout<<"n="<<n<<"   arr[n]="<<arr[n]<<endl;
	if(arr[n]==k)
		return n;
	if(arr[n]>k)
		return psearch(l,n-1,k);
	if(arr[n]<k)
		return psearch(n+1,r,k);
	return -1;

}

int main()
{
	int tc=0;

	FOR(i,0,50000)
	{
			arr[i]=pow(i,2);
			cout<<arr[i]<<" ";
	}
	cout<<endl;
	/*cout<<psearch(1,39,12167);cout<<"  iterations=  "<<count<<endl;
	tc+=count;
	count=0;

	cout<<psearch(1,39,1728);cout<<"  iterations="<<count<<endl;
	tc+=count;

	count=0;
	cout<<psearch(1,39,29791);cout<<"  iterations="<<count<<endl;
	tc+=count;
	count=0;
	cout<<psearch(1,39,1);cout<<"  iterations="<<count<<endl;
	tc+=count;
	count=0;
	cout<<psearch(1,39,19683);cout<<"  iterations="<<count<<endl;

	tc+=count;
	count=0;
	cout<<psearch(1,39,24389);cout<<"  iterations="<<count<<endl;
	tc+=count;
	count=0;*/
/*
	FOR(i,0,50000)
	{
		cout<<psearch(0,49999,arr[i]);cout<<"  iterations="<<count<<endl;
		tc+=count;
		count=0;
	}
	cout<<tc<<endl;
	return 0;
}
*/
