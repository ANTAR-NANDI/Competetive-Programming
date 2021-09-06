#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector< pair<string,int> > p;
	int a,n,i;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s>>a;
		p.push_back(make_pair(s,a));
	}
	for(i=0;i<p.size();i++)
	{
		cout<<p[i].first<<p[i].second;
	}
	
	
}
