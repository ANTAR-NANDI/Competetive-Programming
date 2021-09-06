#include<bits/stdc++.h>
using namespace std;
#define ll long long
int modu(int a,int m,int n)
{
	int res=1;
	while(m)
	{
		if(m%2)
		{
			res=(res*a)%n;
			m--;
		}
		else
		{
			a=(a*a);
			m/=2;
		}
	}
	return res;
}
int main()
{
    int a,n,m;//where m is a prime number
    cin>>a>>m;
    cout<<"The Modular inverse of a^-1 = "<<modu(a,m-2,m);
    
	return 0;
}
