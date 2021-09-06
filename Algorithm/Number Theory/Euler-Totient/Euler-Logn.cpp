#include<bits/stdc++.h>
using namespace std;
#define ll long long
int phi[1000000];
int phie(ll maxn)
{
	int i,j;
	for(i=2;i<=maxn;i++)
	{
		phi[i]=i;
	}
	for(i=2;i<=maxn;i++)
	{
		if(phi[i]==i)
		{
			for(j=i;j<=maxn;j+=i)
			{
				phi[j]/=i;
				phi[j]*=(i-1);
			}
		}
	}
}
int main()
{
    phie(1000000);
    int n;
    cin>>n;
    cout<<phi[n];
	return 0;
}
