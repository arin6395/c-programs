/*
 * tc.cpp
 *
 *  Created on: 05-Oct-2015
 *      Author: arindam

#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<iomanip>
using namespace std;

int is(long double a)
{
	if(a-(long int)a==0)
		return 1;
	return 0;
}
long double r(int a,int i)
{
	return pow((pow(a,2)-pow(i,2)),0.5);
}
int arr[5000001]={0};
int main()
{



		long double a;

		for(int j=1;j<=100000;j++)
		{
		for(int i=1;i<=j/(pow(2,0.5));i++)
		{

			a=r(j,i);
			if(is(a))
			{
				arr[j]=1;
				break;


			}
		}
		}
		cout<<"{";
		for(int j=1;j<=100000;j++)
			cout<<arr[j]<<",";
		cout<<"0}";





	return 0;
}

*/

