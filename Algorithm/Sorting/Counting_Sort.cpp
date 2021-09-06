
#include<bits/stdc++.h>
using namespace std;

#define arr_size 100
#define range 100
int arr[arr_size]; //Globally declared. So initially all indices are zero

int main()
{
    int i, n, value;

    printf("Enter the number of Values: ");
    scanf("%d", &n);

    printf("Enter %d elements (1 to 10):\n", n);
    for(int i = 1; i<=n; i++)
    {
        scanf("%d", &value);
        arr[value] = arr[value]+1;
        //cout<<arr[value]<<" ";
    }

    printf("\nFrequencies of values (1 to 10):\n");
    for(int i = 1; i<=range; i++)
    {
    	while(arr[i]!=0){
    			if(arr[i]>0)
		    	{
		    		cout<<i<<" ";
				}
				arr[i]--;
		}
    
        // printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
