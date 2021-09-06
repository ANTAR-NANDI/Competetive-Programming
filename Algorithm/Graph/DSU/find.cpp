#include<bits/stdc++.h>
using namespace std;
  int parent[100],n,array[10],i,m,o,a,b,test;
  int find(int test)
  {
  	while(1){
		   	if(test==parent[test])
		   	{
		   		return parent[test];
			   }
		    else
		    {
		    	test=parent[test];
			}
      }
  }
int main()
{
	
   cin>>n;
   for(i=0;i<n;i++)
   {
   	cin>>m>>o;
   	parent[m]=o;
   }
   cin>>a>>b;
   a=find(a);
   b=find(b);
  
   if(a!=b)
   {
   	parent[b]=a;
   }
   cin>>a;
   cout<<find(a);
	return 0;
}
