#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    string s1;
    cin>>n;
    cin>>s1;
    char c,tmp,s2[s1.size()];//aaaaabbbbc
    int arr[26]={0},i,j,t;
    for(i=0;i<s1.size();i++)
    {
        arr[s1[i]-'a']++;
       // cout<<s1[i]-'a'<<" ";
    }
    
    i=0;
    for(c='a'; c<='z';c++)
    {
        t = c - 'a';
       cout<<arr[t]<<" ";
//             if(arr[t]>=n)
//             flag=1;
//             else
//             flag=0;
    }
//    s2[i]='\0';
   // cout<<s2<<endl;
return 0;
}
