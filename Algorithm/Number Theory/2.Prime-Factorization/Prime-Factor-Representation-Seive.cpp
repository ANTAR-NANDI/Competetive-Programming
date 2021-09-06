#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,cnt=0;
	cin>>n;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cnt=0;
			while(n%i==0)
			{
				cnt++;
				n/=i;
				//cout<<i;
			}
			cout<<i<<"^"<<cnt<<" ";
		}
		if(n>1)
		{
			cout<<n<<"^"<<1<<" ";
			break;
		}
	}
	
	
	return 0;
}
