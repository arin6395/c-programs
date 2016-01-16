/*
 * PLANEDIV.cpp
 *
 *  Created on: 05-Dec-2015
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
typedef long long lli;
#define FOR(i,a,b) for(int i=a;i<b;i++)
struct line
{
	long double s;
	long double s1;

};
long double n,a,b,c;
line l[100005];
lli gcd(lli n1,lli n2)
{
	if (n2!=0)
	    return gcd(n2, n1%n2);
	else
		return n1;
}

int cmp(const void *a,const void *b)
{
	const struct line* l1=(struct line *) a;
	const struct line* l2=(struct line *) b;
	if(l1->s>l2->s)
		return 1;
	if(l1->s<l2->s)
		return -1;
	if(l1->s==l2->s)
	{
		if(l1->s1>l2->s1)
			return 1;
		else if(l1->s1<l2->s1)
			return -1;
		else if(l1->s1==l2->s1)
			return 0;
	}
	return 0;
}




int main()
{
	lli t;
	cin>>t;
	while(t--)
	{

		cin>>n;
		FOR(i,0,n)
		{
			cin>>a>>b>>c;
			if(a==0)
			{
				l[i].s=0;
				l[i].s1=c;
			}

			else if(b==0)
			{
				l[i].s=10000000000;
				l[i].s1=c;
			}
			else
			{
				l[i].s=a/b;

				l[i].s1=c/gcd(a,b);
			}


		}


		qsort(l,n,sizeof(struct line),cmp);
		lli j;
		FOR(i,0,n-1)
		{
			j=i+1;
			while(l[j].s==l[i].s&&l[j].s1==l[i].s1&&j<n)
			{
				l[j].s=-10000000000;
				l[j].s1=-10000000000;
				j++;
			}
			i=j;
		}*/
		/*FOR(i,0,n)
		{
			cout<<l[i].s<<"  "<<l[i].s1<<endl;
		}*/
/*
		lli maxc=1;
		lli count=1;
		long double s2,s3;
		s2=l[0].s;
		s3=l[0].s1;


		FOR(i,1,n)
		{
			if(l[i].s==-10000000000&&l[i].s1==-10000000000)
				continue;
			else if(l[i].s==s2)
				count++;

			else if(l[i].s!=s2)
			{
				if(count>maxc)
					maxc=count;
				count=1;
				s2=l[i].s;
				s3=l[i].s1;
			}
		}
		cout<<maxc<<endl;

	}
}

*/

