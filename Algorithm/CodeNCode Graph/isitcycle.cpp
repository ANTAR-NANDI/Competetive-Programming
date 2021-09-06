#include<bits/stdc++.h>
using namespace std;
vector<int> v[100];
int vis[100];
bool dfs(int node,int par)
{
	vis[node]=1;
	for(int i=0;i<v[node].size();i++)
	{
		if(vis[i]==0)
		{
			bool res=dfs(i,node);
			if(res==true)
			return true;
		}
		else if(i!=par){
			return true;
		}
	}
	return false;
}
int main()
{
	int edge,node,a,b;
	cin>>node>>edge;
	for(int i=0;i<edge;i++)
	{
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
		bool flag=false;
		for(int i=1;i<=node;i++)
		{
			if(vis[i]==0)
			{
				bool res=dfs(i,-1);
				if(res==true)
				{
					flag=true;
				}
			}
		}
		if(flag==false)
		{
			cout<<"No Cycle"<<endl;
		}
		else{
			cout<<"Cycle"<<endl;
		}
	
	
	return 0;
}
//1 2
//2 3
//2 4
//3 4
//4 5
