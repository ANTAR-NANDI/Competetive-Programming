#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,cnt=0;
	cin>>n;
	for(i=2;i<=n;i++)
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
	}
	
	
	return 0;
}
