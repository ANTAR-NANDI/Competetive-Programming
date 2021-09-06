#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test,n,i,a,cnt=0;
	cin>>test>>n;
	while(test--)
	{
		cin>>a;
		if(a%n==0)
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
