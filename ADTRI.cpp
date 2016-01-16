/*
 * ADTRI.cpp
 *
 *  Created on: 05-Oct-2015
 *      Author: arindam

#include<string.h>
#include<stdlib.h>
#include<stdio.h>



using namespace std;
typedef long long lli;
#define FOR(i,a,b) for(int i=a;i<b;i++)
int prime[31630]={0};
int p[5000011]={0};
int arr1[5000111]={0};
int arr2[5000111];
int arr[200000];

inline int ri() {
  char c = getchar_unlocked();
  while(c<'0' || c>'9') c = getchar_unlocked();
  int r = 0;
  while(c>='0' && c<='9') {
    r = 10 * r + c - 48;
    c = getchar_unlocked();
  }
  return r;
}
void cp()
{
	for(int i=2;i*i<2238;i++)
	{
		if(prime[i]==0)
		{
			for(int j=2*i;j<2238;j+=i)
			{
				prime[j]=1;
			}
		}
	}

}
int main()
{
	cp();
	int t;

	int m=2,n=5000000;


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
			int z=0;
			for(int i=0;i<=n-m;i++)
			{
				if(p[i]==0)
					if((i+m-1)%4==0)
					{
						arr[z]=i+m;
						//arr2[i+m]=1;
						z++;
					}
			}
			//cout<<z<<endl;
			int c;
			for(int i=0;i<z;i++)
				{

					c=arr[i];
					for(int j=c;j<=5000005;j+=c)
					{
						arr1[j]=1;
					}

				}
			//cout<<"yes"<<endl;


	t=ri();
	while(t--)
	{

		int k;
		k=ri();





		if(arr1[k])
			printf("YES\n");
		else
			printf("NO\n");



	}

	return 0;
}

*/
