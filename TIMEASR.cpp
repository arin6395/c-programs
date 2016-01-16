/*
 * TIMEASR.cpp
 *
 *  Created on: 03-Oct-2015
 *      Author: arindam

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<iomanip>

using namespace std;
typedef long long lli;

int main()
{
	int t;
	cin>>t;
	float an;
	int hh,mm;
	float hha,mma;
	float e=1.0/120;
	while(t--)
	{
		cin>>an;
		hh=mm=0;
		hha=mma=0.000;
		while(hh<12)
		{
			//cout<<setw(2) << setfill('0')<<hh<<":"<<setw(2) << setfill('0')<<mm<<"      "<<hha<<"  "<<mma<<endl;
			if(abs(hha-mma)<an+e && abs(hha-mma)>an-e||((360-abs(hha-mma))<an+e && (360-abs(hha-mma)>an-e)))
			//if((hha-mma)==an)
			{
				cout<<setw(2) << setfill('0')<<hh<<":"<<setw(2) << setfill('0')<<mm<<endl;
				//cout<<hha<<"  "<<mma<<endl;


			}
			if(mm==59)
			{
				mm=0;
				hh++;
				mma=0;
				hha+=.5;
			}
			else
			{
				mm++;
				mma+=6;
				hha+=.5;
			}


		}
	}
	return 0;
}

*/
