#include<bits/stdc++.h>
using namespace std;
#define i64 long long 
int main()
{
	vector<long long> v;
	i64 test,sum=0,i,cnt=0,a,array[100001];
	cin>>test;
	for(i=0;i<test;i++)
	{
		cin>>array[i];
	}
	sort(array,array+test);
	//cnt=test;
	for(i=0;i<test;i++)
//10 13 2 5 55 21 34 1 8 1 3//1 1 2 3 5 8 13 21 34 55
	{
		
		if(sum<=array[i])
		{
			cnt++;
			sum=sum+array[i];
		}
      //cout<<sum<<" "<<array[i]<<endl;
		
		//cout<<sum<<" ";
	}
	cout<<cnt<<endl;
	
	
	return 0;
}
