#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	string s;
	cin>>test;
	while(test--)
	{
		cin>>s;
		cout<<(s[0]-'0'+(s[s.length()-1]-'0'))<<endl;
	}
	
	
	return 0;
}
