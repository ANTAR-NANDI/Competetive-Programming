#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<long int> v;
	long int n,time,i,cnt=0,sum=0,a,m=0,j;
	cin>>n>>time;
	for(i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
//	sort(v.begin(),v.end());
    // sum=sum+v[0];
    j=0;
	for(i=0;i<v.size();i++)
	{
	   sum=sum+v[i];//10 9 1 1 5 10 5 3 7 2//3 3 2 2 3//3121
	   if(sum<=time)
	   {
	   	cnt++;
	   	
	   }
	   else{
	   	//cnt--;
	     	
	   	sum-=v[j];
	   	j++;
	     //	cout<<sum<<" ";
	   }
	   m=max(m,cnt);
	}
	cout<<m<<endl;
	return 0;
}
