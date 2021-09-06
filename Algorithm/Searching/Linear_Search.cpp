#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[100],value,location;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>value;
	for(i=0;i<n;i++)
	{
		if(arr[i]==value)
		{
			location =i;
			break;
		}
	}
	cout<<"Find At "<<i<<"th POsition";
}
