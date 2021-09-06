#include<bits/stdc++.h>
using namespace std;
int arr[150000],i,j;
void seive()
{
		int maxn=123009;
	for(i=1;i<=maxn;i++)
	{
		arr[i]=-1;
	}
	for(i=2;i<=maxn;i++)
	{
		if(arr[i]==-1)
		{
			for(j=i;j<=maxn;j+=i)
			{
				if(arr[j]==-1)
				{
					arr[j]=i;
				//	cout<<arr[j];
				}
			}
		}
	}
}
int main()
{
	int n;
	seive();
	cin>>n;
	//cout<<arr[n];
	while(n>1)
	{
		cout<<arr[n]<<" ";
		n/=arr[n];
	}
	
	
	return 0;
}
