#include<bits/stdc++.h>
using namespace std;
vector<int> v[100];
queue<int> q;
bool visited[100];
void bfs(int n){
	int p,i;
	q.push(n);
	visited[n]=1;
	while(!q.empty())
	{
		p=q.front();
    	q.pop();
		for(i=0;i<v[p].size();i++)
		{
			if(v[p][i]==0)
			{
				q.push(v[p][i]);
				visited[v[p][i]]=1;
				cout<<i;
			}
		}
	}
	
}
int main()
{
	int node,edge,i,n1,n2;
	cout<<"Enter Node And Edge"<<endl;
	cin>>node>>edge;
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
			bfs(i);
		}
	}
	
}
