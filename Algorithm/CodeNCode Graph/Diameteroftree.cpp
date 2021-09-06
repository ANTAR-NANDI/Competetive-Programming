#include<bits/stdc++.h>
using namespace std;
vector<int> v[100];
int vis[100];
int maxd,maxnode;
void dfs(int node,int d)
{
	if(d>maxd)maxd=d,maxnode=node;
	vis[node]=1;
	for(int i=0;i<v[node].size();i++)
	{
		int child=v[node][i];
		if(vis[child]==0)
		{
			dfs(child,d+1);
		}
	}
}
int main()
{
	int n,a,b,i;
	cin>>n;
	for(i=1;i<n;i++)
	{
		cin>>a>>b;
		 v[a].push_back(b);
		 v[b].push_back(a);
	}
	maxd=-1;
	dfs(1,0);
	
		for(i=1;i<=n;i++)
	{
	vis[i]=0;
	}
	maxd=-1;
	dfs(maxnode,0);
	cout<<maxd<<endl;
	return 0;
}
