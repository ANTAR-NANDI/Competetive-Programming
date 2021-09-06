#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array[100],low=0,high=0,n,i,mid,value,location;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	high=n-1;
	cin>>value;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(array[mid]==value)
		{
			location=mid;
			break;
		}
		else if(array[mid]<value)
		{
			low=mid;
		}
		else{
			high=mid;
		}
	}
	cout<<location+1;
}
