/*
 * CYCLRACE.cpp
 *
 *  Created on: 08-Jan-2016
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
typedef long long int lli;

#define FOR(i,a,b) for(int i=a;i<b;i++)
const int mod =1000000000+7;

void sl(long long &x){
    register long long r=getchar_unlocked();
    x=0;
    for(;(r<48 || r>57);r=getchar_unlocked());
    for(;r>47 && r<58;r=getchar_unlocked()){
        x=(x<<1)+(x<<3)+r-48;
    }
}

struct cycle
{
	lli no;
	lli speed;
	lli time;
	lli dis;
};

cycle cy[50000];
cycle rl[50000];

lli timea(lli t,lli ca,lli cn)
{
	float time;
	if(cn<0)
		return t;
	if(t==rl[cn].time)
		return t;
	if((cy[ca].speed==cy[rl[cn].no].speed))
		return 0;
	time=(rl[cn].speed*(t-cy[rl[cn].no].time)+cy[rl[cn].no].dis-cy[ca].dis)/(cy[ca].speed-cy[rl[cn].no].speed);
	if(time-(lli)time==0)
		return time;
	else
		return lli(time)+1;
}

int main()
{

	lli n,q;
	sl(n);
	sl(q);
	FOR(i,0,n)
	{
		cy[i].no=i+1;
		cy[i].dis=0;
		cy[i].time=0;
		cy[i].speed=0;
	}
	lli maxsp=0;
	lli qc,t,cno,sp;
	lli tlc=0;
	while(q--)
	{

		//cout<<q<<endl;
		cin>>qc;

		if(qc==1)
		{
			sl(t);
			sl(cno);
			sl(sp);
			cy[cno].dis+=cy[cno].speed*(t-cy[cno].time);
			cy[cno].time=t;
			cy[cno].speed=sp;
			if(sp>=maxsp)
			{
				if(tlc==0)
				{
					rl[tlc].time=t;
					rl[tlc].no=cno;
					rl[tlc].speed=sp;
					rl[tlc].dis=cy[cno].dis;
					tlc++;
				}
				/*else if(t==cy[rl[tlc].no].time)
				{
					if()
					rl[tlc-1].time=timea(t,cno,tlc-1);
					rl[tlc-1].no=cno;
					rl[tlc-1].speed=sp;
					rl[tlc-1].dis=cy[cno].dis+(cy[cno].speed*(t-cy[cno].time));

				}*/
/*
				else if(t>rl[tlc-1].time)
				{
					rl[tlc].time=t+timea(t,cno,tlc-1);
					rl[tlc].no=cno;
					rl[tlc].speed=sp;
					rl[tlc].dis=cy[cno].dis+(cy[cno].speed*(t-cy[cno].time));
					tlc++;
				}
				else if(cno==rl[tlc-1].no)
				{

					rl[tlc-1].speed=sp;
					rl[tlc-1].dis=cy[cno].dis+(cy[cno].speed*(t-cy[cno].time));

				}
				else
				{
					while(tlc>0&&(rl[tlc-1].dis+cy[rl[tlc-1].no].speed*(rl[tlc-1].time-cy[rl[tlc-1].no].time)<=cy[cno].dis+cy[cno].speed*(rl[tlc-1].time-t)))
					{

						tlc--;
					}
					if(rl[tlc].no!=cno)
						rl[tlc].time=t+timea(t,cno,tlc-1);
					rl[tlc].no=cno;
					rl[tlc].speed=sp;
					rl[tlc].dis=cy[cno].dis+(cy[cno].speed*(t-cy[cno].time));

					tlc++;
				}

			}


			if(sp<maxsp&&(cy[cno].dis+cy[cno].speed*(rl[tlc-1].time-t)>rl[tlc-1].dis+rl[tlc-1].speed*(rl[tlc-1].time-cy[rl[tlc-1].no].time))&&t<rl[tlc].time)
			{
				rl[tlc].time=rl[tlc-1].time;
				rl[tlc].no=rl[tlc-1].no;
				rl[tlc].speed=rl[tlc-1].speed;
				rl[tlc].dis=cy[cno-1].dis;
				rl[tlc-1].time=t+timea(t,cno,tlc-2);
				rl[tlc-1].no=cno;
				rl[tlc-1].speed=sp;
				rl[tlc-1].dis=cy[cno].dis;
				rl[tlc].time=t+timea(t,rl[tlc].no,tlc-1);
				int j=tlc-1;

				tlc++;
			}
			maxsp=sp;
			/*FOR(i,0,tlc)
			{
				cout<<"cno="<<rl[i].no<<"\ntime starts at "<<rl[i].time<<endl;
			}
		}*/
/*
		else if (qc==2)
		{
			sl(t);
			int j=tlc-1;
			while(rl[j].time>=t&&j>0)
			{
				j--;
			}
			//cout<< "leader at t =";
			cout<<rl[j].dis+rl[j].speed*(t-cy[rl[j].no].time)<<endl;
		}

	}


	return 0;
}

*/

