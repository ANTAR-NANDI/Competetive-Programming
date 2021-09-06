#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int test,i,count=0,a,b,temp=0;
    vector<int> v,v1;
    cin>>test;
    for(i=0;i<test;i++)
    {
    	cin>>a>>b;
    	v.push_back(a);
    	v1.push_back(b);
	}
	for(i=0;i<v.size()-1;i++)
	{
		if(v[i]==v[i+1]&&v1[i]==v1[i+1])
		{
		  count++;
		}
		else
		{
			count=0;
		}
		temp=max(temp,count);
         
	}
   cout<<temp+1<<endl;
}
