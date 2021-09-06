#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array[6],count=0,i;
	array[4]=-100;
	for(i=0;i<4;i++)
	{
		cin>>array[i];
		
	}
	sort(array,array+4);
	for(i=0;i<4;i++)
	{
		if(array[i]==array[i+1])
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
