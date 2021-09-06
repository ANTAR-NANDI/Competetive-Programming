#include<bits/stdc++.h>
using namespace std;
vector<int> v[100];
queue<int> q;
int visited[100];
void dfs(int n)
{
	int i;
	visited[n]=1;
	for(i=0;i<v[n].size();i++)
	{
		if(visited[v[n][i]]==0)
		{
			cout<<v[n][i]<<" ";
			dfs(v[n][i]);
		}
	}
}
int main()
{
	int edge,node,n1,n2,i;
	cout<<"Enter Edge and Node : "<<endl;
	cin>>edge>>node;
	while(edge--)
	{
		cin>>n1>>n2;
		v[n1].push_back(n2);
		v[n2].push_back(n1);
	}
	memset(visited,0,sizeof(visited));
	for(i=1;i<=node;i++)
	{
		if(visited[i]==0)
		{
			cout<<i<<" "; 
		     dfs(i);
		}
		
	}
}
