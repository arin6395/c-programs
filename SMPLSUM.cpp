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
typedef long long lli;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define gc getchar_unlocked
int gi() {
  char a = gc();
  while(a<'0' || a>'9') a = gc();
  lli ret = 0;
  while(a>='0' &&a<='9') {
    ret = 10 * ret +a - 48;
    a = gc();
  }
  return ret;
}
int phi(lli n)
{
    lli sum = n;
    for (int p=2; p*p<=n; ++p)
    {

        if (n % p == 0)
        {

            while (n % p == 0)
                n /= p;
            sum -= sum / p;
        }
    }


    if (n > 1)
        sum -= sum / n;
    return sum;
}

lli hcf(lli n1,lli n2)
{
	if (n2!=0)
	    return hcf(n2, n1%n2);
	else
		return n1;
}
lli arr[10005];

int main()
{
	FOR(n,1,10004)
	{
		arr[n]=phi(n);
	}
	lli t;
	t=gi();
	while(t--)
	{
		lli n,sum=0;
		n=gi();

		for(lli i=1;i<=n;i++)
		{
			if(n%i==0)
			sum+=i*arr[i];
		}
		printf("%lld\n",sum);


	}
}
*/
