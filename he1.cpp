/*
 * he1.cpp
 *
 *  Created on: 04-Oct-2015
 *      Author: arindam

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>



using namespace std;
typedef long long lli;
#define FOR(i,a,b) for(int i=a;i<b;i++)
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
	lli n,q,a[1005];
	cin>>t;
	while(t--)
	{


		lli tot=0;
		cin>>n>>q;
		FOR(i,0,n)
			cin>>a[i];

		qsort(a,n,sizeof(lli),cmp);

		FOR(i,0,n-1)
		{

			tot+= a[i+1]-a[i];
		}

		if(n==1)
			cout<<"0"<<endl;
		else
			cout<<tot*q<<endl;

	}
	return 0;
}


*/
