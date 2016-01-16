/*
 * WDTBAM.cpp
 *
 *  Created on: 03-Oct-2015
 *      Author: arindam

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<vector>
using namespace std;
typedef long long lli;
struct w
{
	lli p;
	lli in;
};
int cmp(const void *a,const void *b)
{
	const struct w *x= (const struct w*)a;
	const struct w *y=(const struct w*)b;
	if((*x).p>(*y).p)
		return -1;
	if((*x).p<(*y).p)
			return 1;
	return 0;


}
int main()
{
	int t;
	cin>>t;
	char ra[1011];
	char ca[1011];
	w win[1015];
	while(t--)
	{
		lli n,ma=0;
		lli max=0;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>ra[i];
		ra[n]='\0';
		for(int i=0;i<n;i++)
				cin>>ca[i];
		ca[n]='\0';
		for(int i=0;i<n;i++)
		{
			if(ca[i]==ra[i])
				ma++;
		}
		//cout<<"ma="<<ma<<endl;
		for(int i=0;i<=n;i++)
		{
			cin>>win[i].p;
			win[i].in=i;
		}
		if(ma==n)
			cout<<win[n].p<<endl;
		else
		{
		//qsort(win,n+1,sizeof(struct w),cmp);

		int i=0;
		while(win[i].in<=ma)
		{
			if(max<win[i].p)
				max=win[i].p;
			i++;
		}
		cout.setf(ios::fixed);
		cout.precision(0);
		cout<<max<<endl;
		}

	}

	return 0;
}

*/

