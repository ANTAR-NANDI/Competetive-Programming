#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int> v[100];
int vis[100],col[100];
bool dfs(int node,int c)
{
	vis[node]=1;
	col[node]=c;
	for(int i=0;i<v[node].size();i++)
	{
		if(vis[i]==0)
		{
			bool res=dfs(i,c^1);
			if(res==false)
			return false;
		}
		else if(col[node]==col[i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int test,i,a,b,edge,node;
	cin>>test;
	for(i=1;i<=test;i++)
	{
		cin>>node>>edge;
		for(i=0;i<node;i++)
		{
			v[i].clear();
			vis[i]=0;
		}
		for(i=0;i<edge;i++)
		{
			cin>>a>>b;
			v[a].pb(b);
			v[b].pb(a);
		}
		bool flag=true;
		for(i=1;i<=node;i++)
		{
			if(vis[i]==0)
			{
				bool res=dfs(i,0);
				if(res==false)
				{
					flag=false;
				}
			}
		}
		if(flag==false)
		{
			cout<<"Not Bipertite"<<endl;
		}
		else{
			cout<<"Bipertite"<<endl;
		}
	}
	
	
	
	return 0;
}
