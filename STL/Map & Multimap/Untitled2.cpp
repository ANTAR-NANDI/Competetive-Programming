#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,int> m;
	map<string,int>::iterator it;
	multimap<string,int> m1;
	multimap<string,int>::iterator it1;
	string s;
	
	int test,i,n;
	m["antar"]=12;
	cout<<m["antar"]<<endl;
	cin>>test;
	for(i=0;i<test;i++)
	{
		cin>>s>>n;
		m.insert(make_pair(s,n));
	}
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	
	
	//For Multimap
	cout<<"Input for Multimap : "<<endl;
	cin>>test;
	for(i=0;i<test;i++)
	{
		cin>>s>>n;
		m1.insert(make_pair(s,n));
	}
	for(it1=m1.begin();it1!=m1.end();it1++)
	{
		cout<<it1->first<<" "<<it1->second<<endl;
	}
}
