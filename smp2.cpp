/*
 * smp2.cpp
 *
 *  Created on: 10-Nov-2015
 *      Author: arindam
 */
/*
 * SMPLSUM.cpp
 *
 *  Created on: 09-Nov-2015
 *      Author: arindam
 *

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<iomanip>

using namespace std;
typedef unsigned long long lli;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define gc getchar_unlocked
#define pc(x) putchar_unlocked(x);
    inline void wi (lli n)
    {
        lli N = n, r, c = 0;
        r = N;
        if (N == 0) { pc('0'); pc('\n'); return ;}
        while ((r % 10) == 0) { c++; r /= 10;}
        r = 0;
        while (N != 0) { r = (r<<3) + (r<<1) + N % 10; N /= 10;}
        while (r != 0) { pc(r % 10 + '0'); r/= 10;}
        while (c--) pc('0');
        pc('\n');
    }
inline int gi() {
  char a = gc();
  while(a<'0' || a>'9') a = gc();
  lli ret = 0;
  while(a>='0' &&a<='9') {
    ret = 10 * ret +a - 48;
    a = gc();
  }
  return ret;
}
int prime[1000002]={0};
int p[10000200]={0};
int primes[1000002];
void cp()
{
	for(int i=2;i*i<3200;i++)
	{
		if(prime[i]==0)
		{
			for(int j=2*i;j<3200;j+=i)
			{
				prime[j]=1;
			}
		}
	}

}
inline lli hcf(lli n1,lli n2)
{
	if (n2!=0)
	    return hcf(n2, n1%n2);
	else
		return n1;
}
lli arr[10000010]={0};

lli ans(lli x)
{
	lli hd=0;
	if(arr[x]!=0)
		return arr[x];
	else
	{
		int add=0;
		for(lli i=2;i*i<=x;i+=1+add)
		{
			if(x%i==0)
			{

				//cout<<i<<"   hd="<<hd<<endl;
				if(hcf(i,x/i)==1)
				{

					//cout<<"a     "<<i<<"  "<<x/i<<endl;
					return arr[x]=ans(i)*ans(x/i);
				}
				if(hd==0)
				{
					hd=i;
					if(hd!=2)
					{
						add=1;
					}
				}
			}

		}
		return arr[x]=ans(x/hd)*hd*hd -hd+1;
	}
	return 0;
}




int main()
{
	cp();
	arr[1]=1;
	lli m=2,n=10000001;
	lli v;
	for(lli i=2;i*i<=n;i++)
	{
		if(!prime[i])
		{
			v=((m-1)/i+1)*i;
			if(v==i)
				v=i*2;
			for(lli j=v;j<=n;j+=i)
					p[j-m]=1;
		}

	}

	for(lli i=0 ;i<=n-m;i++)
	{
		if(p[i]==0)
		{
			arr[i+m]=(i+m)*(i+m-1) +1;
			if(i<3160)
			{
				arr[(i+m)*(i+m)]=arr[i+m]*(i+m)*(i+m) -(i+m)+1;
				if(i<214)
				{
					arr[(i+m)*(i+m)*(i+m)]=arr[(i+m)*(i+m)]*(i+m)*(i+m) -(i+m)+1;
					if(i<54)
					{
						arr[(i+m)*(i+m)*(i+m)*(i+m)]=arr[(i+m)*(i+m)*(i+m)]*(i+m)*(i+m) -(i+m)+1;
						if(i<25)
							arr[(i+m)*(i+m)*(i+m)*(i+m)*(i+m)]=arr[(i+m)*(i+m)*(i+m)*(i+m)]*(i+m)*(i+m) -(i+m)+1;
					}
				}
			}
		}
	}
	//FOR(i,9800000,10000000)
	//	arr[i]=ans(i);

	lli t;
	t=gi();
	while(t--)
	{

		n=gi();
		if(arr[n]==0)
			wi(ans(n));
		else
			wi(arr[n]);



	}
}

*/



