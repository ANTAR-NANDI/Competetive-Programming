#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,n,res=1,m;
	cin>>a>>n>>m;
	while(n)
	{
		if(n%2)
		{
			res=(res*a)%m;
			n--;
		}
		else
		{
			a=(a*a)%m;
			n=n/2;
		}
	}
	cout<<res;
}
