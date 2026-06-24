#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int mn = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int sum = (a[i] + a[j] + j - i);
                mn=min(sum,mn);
            }
        }
        cout << mn<<endl;
    }

    return 0;
}
// Print the smallest possible result of Ai + Aj + j - i ,
//   where 1  ≤  i < j  ≤  N.