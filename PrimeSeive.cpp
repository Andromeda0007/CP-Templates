#include <bits/stdc++.h>
using namespace std;
#define int   long long
void prime(int n)
{
    int arr[n+1]={};

    for(int i=2; i<=n; i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                if(arr[j]==0)
                {
                    arr[j]=1;
                }
            }
        }
    }

    for(int i=2; i<=n; i++)
    {
        if(arr[i]==0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
signed main()
{
    int n;
    cin >> n;
    prime(n);
}