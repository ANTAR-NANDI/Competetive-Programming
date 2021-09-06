#include<bits/stdc++.h>
using namespace std;

vector<int> v[100];
int vis[100],in[100],out[100];
int timer=1;
void dfs(int n)
{
	int i;
	vis[n]=1;
	in[n]=timer++;
 //cout<<in[n]<<" ";
	for(i=0;i<v[n].size();i++)
	{
		//cout<<i;
		int child=v[n][i];
	//	cout<<child<<" ";
		if(vis[child]==0)
		{
			dfs(child);
		}
      
	}
	out[n]=timer++;
 // cout<<out[n]<<" ";
}
int main()
{
	int node,edge,a,b,i;
	cin>>node>>edge;
	for(i=1;i<=edge;i++)
	{
		cin>>a>>b;
	//	cout<<a<<b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1);
	for(i=1;i<=node;i++)
	{
		cout<<in[i]<<" "<<out[i];
	}
	
	return 0;
}
