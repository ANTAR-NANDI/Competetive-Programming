#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100
vector<int> ar[max];
int vis[100];
void dfs(int v){
	int i;
	vis[v]=1;
	cout<<v<<" ";
	for(i=0;i<ar[v].size();i++)
	{
		int child=ar[v][i];
		if(vis[child]==0)
		{
			dfs(child);
		}
	}
	
}
int main()
{
	int n,test,a,b;
	cin>>n>>test;
	while(n--)
	{
		cin>>a>>b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	
		
	}
		dfs(test);
   
	return 0;
}
