#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    char c,tmp,s2[s1.size()],temp;
    int arr[26]={0},i,j,t;
    for(i=0;i<s1.size();i++)
    {
        for(j=0;j<s1.size()-i-1;j++)
        {
        	if(s1[j]>s1[j+1])
        	{
        		//swap(s1[j],s1[j+1]);
        		temp=s1[j];
        		s1[j]=s1[j+1];
        		s1[j+1]=temp;
					}
		}

    }

    cout<<s1<<endl;
return 0;
}
