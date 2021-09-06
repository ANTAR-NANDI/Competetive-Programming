#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array[10001],test,i;
	cin>>test;
	for(i=0;i<test;i++)
	{
		cin>>array[i];
	}
	for(i=test-1;i>=0;i--)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
