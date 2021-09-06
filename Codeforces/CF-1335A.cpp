#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int test,n,i;
	cin>>test;
	while(test--)
	{
		cin>>n;
		if(n==1||n==2)
		{
			cout<<"0"<<endl;
		}
		else
		{
			if(n%2==0)
			{
				cout<<(n/2)-1<<endl;
			}
			else
			{
				cout<<(n-1)/2<<endl;
			}
		}
	}
	return 0;
}
