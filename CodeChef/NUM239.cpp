#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int test,i,cnt=0,a,b;
	cin>>test;
	while(test--)
	{
		cin>>a>>b;
		for(i=a;i<=b;i++)
		{
			if(i%10==2||i%10==3||i%10==9)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
}
