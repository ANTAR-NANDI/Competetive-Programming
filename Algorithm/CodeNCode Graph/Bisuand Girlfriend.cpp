#include<bits/stdc++.h>
using namespace std;
int vis[100],dis[100];
vector<int> ar[100];
void dfs(int nod,int d)
{
	int i;
	vis[nod]=1;
	dis[nod]=d;
	for(i=0;i<ar[nod].size();i++)
	{
		int child=ar[nod][i];
		if(vis[child]==0)
		{
			dfs(child,dis[nod]+1);
		}
	}
}
int main()
{
	int no,edge,i,a,b;
	cin>>no;
	for(i=1;i<no;i++)
	{
		cin>>a>>b;
		ar[a].push_back(b);
		ar[b].push_back(a);
		
		
	}
	dfs(1,0);
	int q,ans=-1,min_dist=1000000,test;
	cin>>q;
	while(q--)
	{
		cin>>test;
		if(dis[test]<min_dist)
		{
			min_dist=dis[test],ans=test;
		}
		else if(dis[test]==min_dist&&test<ans)
		{
			ans=test;
		}
	}
	cout<<ans;

   
    return 0;

}
