#include<bits/stdc++.h>
using namespace std;
int arr[100006];
int main()
{
    int n,j;
    cin >> n;
    arr[0] = 1;
    int sz = 1;
    for(int i = 2 ; i<=n ; i++)
    {
        int carry = 0;
        for(j = 0 ; j<sz ; j++)
        {
            int x = arr[j]*i+carry;
            arr[j] = x%10;
            carry = x/10;
        }
        sz = j;
        while(carry)
        {
            arr[sz]=carry%10;
            carry/=10;
            sz ++;
        }
    }
    cout<<sz-1<<endl;
    for(int i = sz-1 ; i>=0 ; i--) cout << arr[i];

return 0;
}
