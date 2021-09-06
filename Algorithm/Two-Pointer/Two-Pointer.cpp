#include<bits/stdc++.h>
using namespace std;
bool isPairSum(int array[],int n,int x) 
{  
	int i = 0; 
	int j = n - 1; 

	while (i < j) {  
		if (array[i] + array[j] == x) 
			return true; 
		else if (array[i] + array[j] < x) //1 2 3 4 5//8
			i++; 

		else
			j--; 
	} 
	return false; 
} 
int main()
{
	int n,x=10,k,i,array[10];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	k=isPairSum(array,n,x);
	cout<<k;
	
}

