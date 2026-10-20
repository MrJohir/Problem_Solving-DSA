#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n+1);

    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }

    vector<long long int> prefixsum(n+1);
    prefixsum[1]=v[1];
    for(int i=2; i<=n; i++)
    {
        prefixsum[i]=prefixsum[i-1]+v[i];
    }
    // for(int i=1; i<=n; i++)
    // {
    //     cout<<prefixsum[i]<<" ";
    // }

    while(q--)
    {
        int l,r;
        cin>>l>>r;
        long long int sum=0;
        if(l==1)
        {
            sum = prefixsum[r];
        }
        else{
            sum = prefixsum[r]-prefixsum[l-1];
        }
        
        // for(int i=l; i<=r; i++)
        // {
        //     sum += v[i];
        // }
        cout<<sum<<endl;
    }

}