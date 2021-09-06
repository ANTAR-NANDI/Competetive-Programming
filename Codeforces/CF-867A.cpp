#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    char str[102];
    int l,test;
    cin>>test;
    getchar();
    gets(str);
     l=strlen(str);
    if(str[0]=='S'&&str[l-1]=='F')
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
