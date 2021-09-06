#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,n,res=1;
	cin>>a>>n;
	while(n)
	{
		if(n%2)
		{
			res*=a;
			n--;
		}
		else
		{
			a=a*a;
			n=n/2;
		}
	}
	cout<<res;
}
