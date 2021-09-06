#include<bits/stdc++.h>
using namespace std;
#define ma 1000
int main()
{
	long long int a,test,b;
	cin>>test;
	while(test--)
	{
		cin>>a>>b;
		cout<<(24*60)-((a*60)+b)<<endl;
	}
	return 0;
}
