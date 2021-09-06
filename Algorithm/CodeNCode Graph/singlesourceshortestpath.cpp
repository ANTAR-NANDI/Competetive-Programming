#include<bits/stdc++.h>
using namespace std;
int vis[100],dis[100];
vector<int> ar[100];
void dfs(int nod)
{
	int i;
	vis[nod]=1;
	for(i=0;i<ar[nod].size();i++)
	{
		int child=ar[nod][i];
		if(vis[child]==0)
		{
			dfs(child);
		}
	}
}
int main()
{
	int no,ed,i,a,b,cnt=0;
	cin>>no>>ed;
	for(i=1;i<=ed;i++)
	{
		cin>>a>>b;
		ar[a].push_back(b);
		ar[b].push_back(a);
		
		
	}
	for(i=1;i<=no;i++)
	{
		if(vis[i]==0)
		{
			dfs(i);
			cnt++;
		}
	}
	cout<<cnt;
	
    return 0;

}
