#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    char c,tmp,s2[s1.size()];//aaaaabbbbc
    int arr[26]={0},i,j,t;
    for(i=0;i<s1.size();i++)
    {
        arr[s1[i]-'a']++;
        ///cout<<s1[i]-'a'<<" ";
    }
    
    i=0;
    for(c='a'; c<='z';c++)
    {
        t = c - 'a';
        for(j=0;j<arr[t];j++)
        {
            s2[i]=c;
            i++;
        }
    }
    s2[i]='\0';
    cout<<s2<<endl;
return 0;
}
